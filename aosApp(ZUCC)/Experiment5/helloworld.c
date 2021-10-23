/*
 * Copyright (C) 2015-2017 Alibaba Group Holding Limited
 */

#include <stdio.h>

#include <aos/kernel.h>

int application_start(int argc, char *argv[])
{
    while(1) {
        long now1 = aos_now_ms();
        printf("Start sleep %ld\n",now1);

        aos_msleep(1);

        long now2 = aos_now_ms();
        printf("Stop sleep %ld\n",now2);

        aos_msleep(1000);
    };
}
