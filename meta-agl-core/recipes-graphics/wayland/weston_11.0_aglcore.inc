FILESEXTRAPATHS:append := ":${THISDIR}/weston"

PACKAGECONFIG:append = "${@bb.utils.contains('DISTRO_FEATURES', 'weston-remoting', ' remoting', '', d)}"
PACKAGECONFIG:append = "${@bb.utils.contains('AGL_FEATURES', 'waltham-remoting', ' remoting', '', d)}"

SRC_URI:append = "file://0001-libweston-Send-name-description-update-wl_output-to-.patch"

# seat management is only for waltham-transmitter-plugin
SRC_URI:append = "${@bb.utils.contains('AGL_FEATURES', 'waltham-remoting', ' file://0001-libweston-Migrate-weston_seat_init-release-to-public.patch', '', d)}"
