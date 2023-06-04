FILESEXTRAPATHS:prepend:rk3588 := "${THISDIR}/${PN}:"

SRC_URI:append:rk3588 = " \
	file://nanopc-t6_output.cfg \
"

WESTON_FRAGMENTS:append:nanopct6 = " nanopc-t6_output"
