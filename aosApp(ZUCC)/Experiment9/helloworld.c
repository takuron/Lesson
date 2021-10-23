/*
 * Copyright (C) 2015-2017 Alibaba Group Holding Limited
 */

#include <stdio.h>

#include <aos/kernel.h>

aos_sem_t signal;
aos_task_t task1,task2;
char* string;
int count = 0;

void task1v(void){
    while(1){
        if(!aos_sem_wait(&signal,AOS_WAIT_FOREVER)){
            count++;
            string=aos_malloc(1024);
            sprintf(string,"Count:%d \n",count);
            printf("Write to string\n");
            aos_sem_signal(&signal);
        }
        aos_msleep(50);
    }
}

void task2v(void){
    while(1){
        if(!aos_sem_wait(&signal,AOS_WAIT_FOREVER)){
            printf("%s", string);
            aos_free(string);
            aos_sem_signal(&signal);
        }
        aos_msleep(70);
    }
}

int application_start(int argc, char *argv[])
{

    printf("nano entry here!\r\n");

    aos_sem_new(&signal,1);

    aos_task_new_ext(&task1,"task1",task1v,0,8192,33);
    aos_task_new_ext(&task2,"task2",task2v,0,8192,34);

    while(1) {
        aos_msleep(1000);
    };
}
