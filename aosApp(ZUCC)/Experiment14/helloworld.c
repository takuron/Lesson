
#include <stdio.h>
#include <aos/kernel.h>
#include <stdint.h>
#include <aos/yloop.h>

aos_task_t htask1;
aos_task_t htask2;
volatile int count1=0;
volatile int count2=0;
volatile int totalcount=0;

void count(void* arg)
{
	int tmp;
	tmp=totalcount;
	tmp=tmp+1;
	totalcount=tmp;
}

void func(void * arg)
{
	printf("cnt1=%d,cnt2=%d,cnt1+cnt2=%d,totalcnt=%d \r\n", count1,count2,count1+count2,totalcount);
	aos_post_delayed_action(1000,func,0);
}

void func1(void * arg)
{
	int tmp;
	while(1)
	{
		count1++;
		aos_schedule_call(count,0);
		aos_msleep(10);
	}
}
void func2(void * arg)
{
	int tmp;
	while(1)
	{
		count2++;
		aos_schedule_call(count,0);
	}
}

int application_start(int argc, char *argv[])
{
    printf("nano entry here!\r\n");
	aos_task_new_ext(&htask1,"task1", func1,0, 8192,33);
	aos_task_new_ext(&htask2,"task2", func2,0, 8192,34);
	aos_post_delayed_action(1000,func,0);
	aos_loop_run();
	return 0;
}
