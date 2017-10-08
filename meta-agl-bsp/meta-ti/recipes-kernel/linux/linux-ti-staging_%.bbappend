FILESEXTRAPATHS_prepend := "${THISDIR}/files:"

SRC_URI_append = " file://ramblock_nbd.cfg"
KERNEL_CONFIG_FRAGMENTS_append = " ${WORKDIR}/ramblock_nbd.cfg"

# Enable support for TP-Link TL-W722N USB Wifi adapter
SRC_URI_append = " file://ath9k_htc.cfg"
KERNEL_CONFIG_FRAGMENTS_append = " ${WORKDIR}/ath9k_htc.cfg"

# Enable support for RTLSDR
SRC_URI_append = " file://rtl_sdr.cfg"
KERNEL_CONFIG_FRAGMENTS_append = " ${WORKDIR}/rtl_sdr.cfg"

# Enable support for Bluetooth HCI USB devices
SRC_URI_append = " file://btusb.cfg"
KERNEL_CONFIG_FRAGMENTS_append = " ${WORKDIR}/btusb.cfg"

#-------------------------------------------------------------------------
# smack patches for handling bluetooth

SRC_URI_append_smack = "\
       file://0004-Smack-Assign-smack_known_web-label-for-kernel-thread.patch \
"

# Enable support for smack
KERNEL_CONFIG_FRAGMENTS_append_smack = "\
       ${WORKDIR}/audit.cfg \
       ${WORKDIR}/smack.cfg \
       ${WORKDIR}/smack-default-lsm.cfg \
"

# file comes out of  meta-agl-bsp/recipes-kernel/linux/linux_%.bbappend
KERNEL_CONFIG_FRAGMENTS_append = " ${WORKDIR}/can-bus.cfg"

# fix issue in kernel-devsrc meta pkg wrt /bin/awk vs /usr/bin/awk
do_configure_append(){

# enforce all scripts to use /usr/bin/awk . This fixes the rpm dependency failure on install of kernel-devsrc
cd ${S} || true
( for i in `git grep "\!/bin/awk" | cut -d":" -f1 ` ; do sed -i -e "s#\!/bin/awk#\!/usr/bin/awk#g" $i ; done ) || true
cd ${B} || true
( for i in `git grep "\!/bin/awk" | cut -d":" -f1 ` ; do sed -i -e "s#\!/bin/awk#\!/usr/bin/awk#g" $i ; done ) || true

}
