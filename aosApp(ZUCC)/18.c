/*
 * Copyright (C) 2015-2017 Alibaba Group Holding Limited
 */

#include <stdio.h>

#include <aos/kernel.h>
#include <aos/hal/gpio.h>
#include <aos/hal/adc.h>

#define LED1_PORT 13
#define LED2_PORT 26
#define S1_PORT 0
#define S2_PORT 35
#define S3_PORT 34
#define S4_PORT 39

gpio_dev_t Led1,Led2,S1;
adc_dev_t S2,S3,S4;

int application_start(int argc, char *argv[])
{
    printf("nano entry here!\r\n");

    Led1.port=LED1_PORT;
    Led2.port=LED2_PORT;
    S1.port=S1_PORT;
    S2.port=S2_PORT;
    S3.port=S3_PORT;
    S4.port=S4_PORT;

    Led1.config=OUTPUT_PUSH_PULL;
    Led2.config=OUTPUT_PUSH_PULL;
    S1.config=INPUT_PULL_UP;

    hal_gpio_init(&Led1);
    //hal_gpio_init(&Led2);
    hal_gpio_init(&S1);

    hal_adc_init(&S2);
    hal_adc_init(&S3);
    hal_adc_init(&S4);

    while(1) {
        uint32_t S1V,S2V,S3V,S4V;
        hal_gpio_input_get(&S1,&S1V);
        if(!S1V) {
            printf("S1 click!\n");
        }
        hal_adc_value_get(&S2,&S2V,HAL_WAIT_FOREVER);
        if(!S2V) {
            printf("S2 click!\n");
        }
        hal_adc_value_get(&S3,&S3V,HAL_WAIT_FOREVER);
        if(!S3V) {
            printf("S3 click!\n");
        }
        hal_adc_value_get(&S4,&S4V,HAL_WAIT_FOREVER);
        if(!S4V) {
            printf("S4 click!\n");
        }

        aos_msleep(300);
    };
}
