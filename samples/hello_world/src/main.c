/*
 * Copyright (c) 2012-2014 Wind River Systems, Inc.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include <zephyr.h>
#include <sys/printk.h>

void main(void)
{
	uint16_t count = 0;

	printk("Hello World! %s\n", CONFIG_BOARD);

	while(1)
	{
		printk("Count %d.\n", count++);
		k_msleep(1000);
	}
}
