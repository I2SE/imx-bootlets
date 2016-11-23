/*
 * Platform specific data for the I2SE EVAcharge SE board
 *
 * Michael Heimpold <michael.heimpold@i2se.com>
 *
 * Copyright 2016 I2SE GmbH All Rights Reserved.
 *
 * This file is licensed under the terms of the GNU General Public License
 * version 2.  This program  is licensed "as is" without any warranty of any
 * kind, whether express or implied.
 */
#include <setup.h>
#include <keys.h>

/************************************************
 *	Magic key combinations for Duckbill	*
 ************************************************/
u32 magic_keys[MAGIC_KEY_NR] = {
};

/************************************************
 *		Default command line		*
 ************************************************/
char cmdline_def[] = "console=ttyAMA0,115200 root=/dev/mmcblk0p2 rootwait panic=1 quiet";
