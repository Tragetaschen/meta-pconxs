
require conf/machine/include/imx-base.inc
require conf/machine/include/tune-cortexa9.inc

PREFERRED_PROVIDER_virtual/kernel = "linux-stable"
#PREFERRED_PROVIDER_virtual/kernel = "linux-fslc"
PREFERRED_PROVIDER_virtual/bootloader = "u-boot-fslc"

SERIAL_CONSOLE = "115200 ttymxc1"
SOC_FAMILY = "mx6:mx6dl"

KERNEL_IMAGETYPE = "zImage"

UBOOT_CONFIG = "sd"

MACHINE_FEATURES = "apm usbgadget usbhost vfat"
