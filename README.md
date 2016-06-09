Freescale bootlets for I2SE Duckbill 2
======================================

This repository contains the Freescale bootlets with modifications
required for I2SE's Duckbill 2 devices.


Compile an image
----------------

To build an image, you need a kernel image `zImage` within the root
directory of this project. As the bootlets have no support to pass
an additional Device Tree blob to the kernel, you have to use the
linux feature to append the DT blob to the kernel. Then this combined
image can be used with the bootlets as usual.

In other words, when you have a kernel build tree, then you have to:

```
# change to project base
cd imx-bootlets

# adopt these to you local environment
LINUXDIR="../path/to/linux"
CROSS_COMPILE="arm-linux-gnueabi-"

# run the following commands as is
KBOOTDIR="$LINUXDIR/arch/arm/boot"

cat "$KBOOTDIR/zImage" "$KBOOTDIR/dts/imx28-duckbill-2.dtb" > zImage

make -j1 MEM_TYPE=MEM_DDR1 BOARD=duckbill
```

Don't forget to use the apropriated device blob for your exact Duckbill
variant.


Modify kernel commandline
-------------------------

Use can simply pass the desired kernel commandline via environment, e.g.

```
# follow the steps as show above

# just before the make command, define the new kernel cmdline, e.g.
CMDLINE1="console=ttyAMA0,115200 root=/dev/mmcblk0p2 rootwait rootfstype=ext4 lpj=1130496 panic=1 quiet"
export CMDLINE1

make -j1 MEM_TYPE=MEM_DDR1 BOARD=duckbill
```
