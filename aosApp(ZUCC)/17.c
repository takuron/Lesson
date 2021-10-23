/*
 * Copyright (C) 2015-2017 Alibaba Group Holding Limited
 */

#include <stdio.h>

#include <aos/kernel.h>
#include <aos/hal/gpio.h>

#define LED1_PORT 13;
#define LED2_PORT 26;
#define S1_PORT 0;

gpio_dev_t Led1,Led2,S1;


int application_start(int argc, char *argv[])
{
    printf("nano entry here!\r\n");

    Led1.port=LED1_PORT;
    Led2.port=LED2_PORT;
    S1.port=S1_PORT;

    Led1.config=OUTPUT_PUSH_PULL;
    Led2.config=OUTPUT_PUSH_PULL;
    S1.config=INPUT_PULL_UP;

    hal_gpio_init(&Led1);
    //hal_gpio_init(&Led2);
    hal_gpio_init(&S1);

    while(1) {
        uint32_t S1V;
        hal_gpio_input_get(&S1,&S1V);
        if(!S1V) hal_gpio_output_toggle(&Led1);
        aos_msleep(200);
    };
}
