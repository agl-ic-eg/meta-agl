SUMMARY = " Application that switches/activates other application's windows "
DESCRIPTION = " A wayland client and a script that talks with the agl-compositor \
an tells it to display a specific application. Relies on the appid being \
started (already) by afm-util or the client shell (homescreen/WAM)"

HOMEPAGE = "https://gerrit.automotivelinux.org/gerrit/q/project:src%252Fagl-shell-activator"
SECTION = "x11"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://COPYING;md5=e978448a0d41d826d73890d9c22caf75"

DEPENDS = "wayland wayland-protocols wayland-native agl-compositor"

SRC_URI = "git://gerrit.automotivelinux.org/gerrit/src/agl-shell-activator.git;protocol=https;branch=${AGL_BRANCH}"
SRCREV = "5ad501b328d35f128a98aed835b6ecdaf24dd198"

PV = "0.0.10+git${SRCPV}"
S = "${WORKDIR}/git"


inherit meson pkgconfig python3native

FILES:${PN} = " ${bindir}/agl-shell-activator"
