# Configurations to run on VirtualBox/VMWare
#
# To get wide screen than default, there are a selection of resolutions
# available:
#
#APPEND += "uvesafb.mode_option=1024x768-32"
#APPEND += "uvesafb.mode_option=1280x1024-32"
#APPEND += "uvesafb.mode_option=1600x1200-32"
#
# To avoid corrupt boot screen by systemd message, you can use serial
# console separated from VGA console or disable all boot messages by
# kernel command line.
#
# Configuration for serial console
APPEND += "console=ttyS0,115200n8 reboot=efi"
#
# All boot message will be off
#APPEND += "quiet"

# Enable Libvaapi for HW accelerated video support
#
IMAGE_INSTALL_append = " \
        libva \
        va-intel \
        gstreamer-vaapi-1.0 "

AGL_DEFAULT_IMAGE_FSTYPES := "live wic"
AGL_DEFAULT_INITRAMFS_FSTYPES := "cpio.gz"
NOISO = "1"