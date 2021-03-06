LICENSE = "GPLv2"
LIC_FILES_CHKSUM = "file://COPYING;md5=d7810fab7487fb0aad327b76f1be7cd7"
DEPENDS += "lzop-native bc-native"
PROVIDES = "virtual/kernel linux-mainline"         

inherit kernel
require recipes-kernel/linux/linux-dtb.inc

S = "${WORKDIR}/git"
SRCBRANCH ?= "linux-${PV}.y"

SRC_URI = "git://github.com/Tragetaschen/linux-stable-pconxs.git;protocol=https;branch=${SRCBRANCH} \
	file://defconfig \
"
SRCREV="${AUTOREV}"

LOCALVERSION = "-target"
KERNEL_EXTRA_ARGS += "LOADADDR=${UBOOT_ENTRYPOINT}"

