FILESEXTRAPATHS_prepend := "${THISDIR}/files:"

# Extra configuration options for NBD support and netboot over RAMFS
SRC_URI += "file://nbd.cfg \
            file://ramdisk.cfg \
            "
