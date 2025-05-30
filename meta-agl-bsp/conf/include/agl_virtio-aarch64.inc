# Root device
ROOT_VM = "root=PARTUUID=${DISK_SIGNATURE}-02"

# Use our own wks file
WKS_FILE = "directdisk.wks.in"

# Simplest possible option
AGL_DEFAULT_IMAGE_FSTYPES = "ext4"

# Need to run QEMU with virtio-gpu device
PACKAGECONFIG:append:pn-qemu-system-native = " virglrenderer glx gtk+"
