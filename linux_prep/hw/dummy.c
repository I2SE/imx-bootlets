/*
 * Dummy low-level driver
 *
 * Michael Heimpold <michael.heimpold@i2se.com>
 *
 * Copyright 2016 I2SE GmbH
 *
 * This file is licensed under the terms of the GNU General Public License
 * version 2.  This program  is licensed "as is" without any warranty of any
 * kind, whether express or implied.
 *
 * http://www.opensource.org/licenses/gpl-license.html
 * http://www.gnu.org/copyleft/gpl.html
 */
#include <init.h>

static void dummy_init (void)
{
}

hw_initcall(dummy_init);
