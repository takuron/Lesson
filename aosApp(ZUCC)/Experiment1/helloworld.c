/*
 * Copyright (C) 2015-2017 Alibaba Group Holding Limited
 */

#include <stdio.h>

#include <aos/kernel.h>

aos_task_t task1,task2,task3;

void task1v(void* args){
    while(1) {
        long now = aos_now_ms();
        printf("Task2 start!%ld\n",now);
    };
}

void task2v(void* args){
    int count=0;
    while(1) {
        
    };
}

void task3v(void* args){
    while(1) {
        long now = aos_now_ms();
        printf("Task2 stop!%ld\n",now);
    };
}

int application_start(int argc, char *argv[])
{
    aos_task_new_ext(&task1,"task1",task1v,0,8192,33);
    aos_task_new_ext(&task2,"task2",task2v,0,8192,33);
    aos_task_new_ext(&task3,"task3",task3v,0,8192,33);

    while(1) {
        aos_msleep(1000);
    };
}
