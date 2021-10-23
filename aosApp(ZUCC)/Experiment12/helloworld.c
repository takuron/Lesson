/*
 * Copyright (C) 2015-2017 Alibaba Group Holding Limited
 */

#include <stdio.h>
#include <stdint.h>
#include <aos/kernel.h>

aos_queue_t queue;
uint8_t queBuf[1024];
char string[100];

void func1(void){
    int count = 0;
    while (1)
    {
        count++;
        sprintf(&string,"Func1 count:%d\n",count);
        char* str = string;
        aos_queue_send(&queue,&str,sizeof(char*));
        aos_msleep(1000);
    }
    
}

void func2(void){
    while(1){
        char* rec;
        unsigned int size;
        aos_queue_recv(&queue,AOS_WAIT_FOREVER,&rec,&size);
        printf("%s",rec);
    }
}

int application_start(int argc, char *argv[])
{
    aos_queue_new(&queue,&queBuf,1024,sizeof(char*));

    aos_task_new("task1",func1,0,8192);
    aos_task_new("task2",func2,0,8192);

    while(1) {

        aos_msleep(1000);
    };
}
