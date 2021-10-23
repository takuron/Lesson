/*
 * Copyright (C) 2015-2017 Alibaba Group Holding Limited
 */

#include <stdio.h>

#include <aos/kernel.h>
#include <k_api.h>

void hook1(void){
    printf("idle hook1\r\n");
}

void hook2(void){
    printf("idle hook2\r\n");
}

int application_start(int argc, char *argv[])
{
    int count = 0;
    krhino_idle_add_hook(hook1,0);
    krhino_idle_add_hook(hook2,0);

    while(1) {
        count++;
        printf("Task run now\n");
        if(count>100) aos_msleep(300);
    };
}
