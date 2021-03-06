SUMMARY = "PipeWire Media Server"
DESCRIPTION = "The set of packages required to use PipeWire in AGL"
LICENSE = "MIT & LGPL-2.1"

inherit packagegroup

PACKAGES = "\
    packagegroup-pipewire \
    "

RDEPENDS_${PN} += "\
    pipewire \
    pipewire-alsa \
    gstreamer1.0-pipewire \
"
