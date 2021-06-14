#include "bmp280.h"   

static bmp280_calib_data bmp280_calib; 
static int32_t bmp280t_fine;
 
bool BMP280Init( ) 
{
  Wire.begin();
  if (BMP280Read8(BMP280_REGISTER_CHIPID) != 0x58)
    return false;
  BMP280ReadCoefficients();
  BMP280Write8(BMP280_REGISTER_CONTROL, 0x3F);
  return true;
}
void BMP280Write8(byte reg, byte value)
{
  Wire.beginTransmission((uint8_t)BMP280ADDR);
  Wire.write((uint8_t)reg);
  Wire.write((uint8_t)value);
  Wire.endTransmission();
}
uint8_t BMP280Read8(byte reg)
{
  uint8_t value;
  Wire.beginTransmission((uint8_t)BMP280ADDR);
  Wire.write((uint8_t)reg);
  Wire.endTransmission();
  Wire.requestFrom((uint8_t)BMP280ADDR, (byte)1);
  value = Wire.read();
  Wire.endTransmission();
  return value;
}
uint16_t BMP280Read16(byte reg)
{
  uint16_t value;
  Wire.beginTransmission((uint8_t)BMP280ADDR);
  Wire.write((uint8_t)reg);
  Wire.endTransmission();
  Wire.requestFrom((uint8_t)BMP280ADDR, (byte)2);
  value = (Wire.read() << 8) | Wire.read();
  Wire.endTransmission();
  return value;
}
uint16_t BMP280Read16_LE(byte reg) 
{
  uint16_t temp = BMP280Read16(reg);
  return (temp >> 8) | (temp << 8); 
}
int16_t BMP280ReadS16(byte reg)
{
  return (int16_t)BMP280Read16(reg);
}
int16_t BMP280ReadS16_LE(byte reg)
{
  return (int16_t)BMP280Read16_LE(reg);
}
void BMP280ReadCoefficients(void)
{
    bmp280_calib.dig_T1 = BMP280Read16_LE(BMP280_REGISTER_DIG_T1);
    bmp280_calib.dig_T2 = BMP280ReadS16_LE(BMP280_REGISTER_DIG_T2);
    bmp280_calib.dig_T3 = BMP280ReadS16_LE(BMP280_REGISTER_DIG_T3);

    bmp280_calib.dig_P1 = BMP280Read16_LE(BMP280_REGISTER_DIG_P1);
    bmp280_calib.dig_P2 = BMP280ReadS16_LE(BMP280_REGISTER_DIG_P2);
    bmp280_calib.dig_P3 = BMP280ReadS16_LE(BMP280_REGISTER_DIG_P3);
    bmp280_calib.dig_P4 = BMP280ReadS16_LE(BMP280_REGISTER_DIG_P4);
    bmp280_calib.dig_P5 = BMP280ReadS16_LE(BMP280_REGISTER_DIG_P5);
    bmp280_calib.dig_P6 = BMP280ReadS16_LE(BMP280_REGISTER_DIG_P6);
    bmp280_calib.dig_P7 = BMP280ReadS16_LE(BMP280_REGISTER_DIG_P7);
    bmp280_calib.dig_P8 = BMP280ReadS16_LE(BMP280_REGISTER_DIG_P8);
    bmp280_calib.dig_P9 = BMP280ReadS16_LE(BMP280_REGISTER_DIG_P9);
}

float BMP280ReadTemperature(void)
{
  int32_t var1, var2;
  
  int32_t adc_T = BMP280Read16(BMP280_REGISTER_TEMPDATA);
  adc_T <<= 8;
  adc_T |= BMP280Read8(BMP280_REGISTER_TEMPDATA+2);
  adc_T >>= 4;

  var1  = ((((adc_T>>3) - ((int32_t)bmp280_calib.dig_T1 <<1))) * 
     ((int32_t)bmp280_calib.dig_T2)) >> 11;

  var2  = (((((adc_T>>4) - ((int32_t)bmp280_calib.dig_T1)) * 
       ((adc_T>>4) - ((int32_t)bmp280_calib.dig_T1))) >> 12) * 
     ((int32_t)bmp280_calib.dig_T3)) >> 14;

  bmp280t_fine = var1 + var2;

  float T  = (bmp280t_fine * 5 + 128) >> 8;
  return T/100;
}

float BMP280ReadPressure(void) 
{
  int64_t var1, var2, p;
  
  int32_t adc_P = BMP280Read16(BMP280_REGISTER_PRESSUREDATA);
  adc_P <<= 8;
  adc_P |= BMP280Read8(BMP280_REGISTER_PRESSUREDATA+2);
  adc_P >>= 4;

  var1 = ((int64_t)bmp280t_fine) - 128000;
  var2 = var1 * var1 * (int64_t)bmp280_calib.dig_P6;
  var2 = var2 + ((var1*(int64_t)bmp280_calib.dig_P5)<<17);
  var2 = var2 + (((int64_t)bmp280_calib.dig_P4)<<35);
  var1 = ((var1 * var1 * (int64_t)bmp280_calib.dig_P3)>>8) +
    ((var1 * (int64_t)bmp280_calib.dig_P2)<<12);
  var1 = (((((int64_t)1)<<47)+var1))*((int64_t)bmp280_calib.dig_P1)>>33;
  
  if (var1 == 0) {
    return 0;  // avoid exception caused by division by zero
  }
  p = 1048576 - adc_P;
  p = (((p<<31) - var2)*3125) / var1;
  var1 = (((int64_t)bmp280_calib.dig_P9) * (p>>13) * (p>>13)) >> 25;
  var2 = (((int64_t)bmp280_calib.dig_P8) * p) >> 19;

  p = ((p + var1 + var2) >> 8) + (((int64_t)bmp280_calib.dig_P7)<<4);
  return (float)p/256;
}
