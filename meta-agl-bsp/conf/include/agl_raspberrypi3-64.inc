# Maximum memory allowed to be assigned
GPU_MEM = "255"

ENABLE_CMA = "1"
CMA_LWM = "16"
CMA_HWM = "32"

CORE_IMAGE_EXTRA_INSTALL += "wayland weston"

MULTI_PROVIDER_WHITELIST += "virtual/libgl virtual/egl virtual/libgles1 virtual/libgles2"

KERNEL_IMAGETYPE = "Image"
KERNEL_DEVICETREE_append = " overlays/vc4-kms-v3d-overlay.dtb"
PREFERRED_VERSION_linux-raspberrypi = "4.9.%"
PREFERRED_VERSION_mesa = "12.%"

PREFERRED_PROVIDER_virtual/egl = "mesa"
PREFERRED_PROVIDER_virtual/libgles2 = "mesa"
PREFERRED_PROVIDER_virtual/libgl = "mesa"
PREFERRED_PROVIDER_virtual/mesa = "mesa"
PREFERRED_PROVIDER_jpeg = "jpeg"

MACHINE_FEATURES += "vc4graphics"

# For libomxil
#LICENSE_FLAGS_WHITELIST = "commercial"

IMAGE_INSTALL_append = " kernel-modules linux-firmware "

# Psplash causes crash on first boot on RPi
IMAGE_FEATURES_remove = "splash"

# Add the custom rpi-sdimg output format
AGL_EXTRA_IMAGE_FSTYPES  = " rpi-sdimg.xz"

# Use the AGL default ext4.xz to generate the rpi-sdimg
SDIMG_ROOTFS_TYPE = "ext4.xz"