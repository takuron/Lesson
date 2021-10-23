/*
 * Copyright (C) 2015-2017 Alibaba Group Holding Limited
 */

#include <stdio.h>
#include <stdint.h>
#include <aos/kernel.h>
#include <aos/cli.h>

void MyCmd1(char *buf, int32_t len, int32_t argc, char **argv)
{
	printf("time: %lld ms\r\n",aos_now_ms());
}

const struct cli_command cmd = {"gettimenow", "get time unit ms", MyCmd1};

int application_start(int argc, char *argv[])
{
    
    printf("nano entry here!\r\n");
	aos_cli_register_command(&cmd);

    while(1) {
        aos_msleep(1000);
    };
}

