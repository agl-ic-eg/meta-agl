PROVIDES_remove = "udev"

do_install_append(){
	rm ${D}${includedir}/libudev.h
	rm ${D}${datadir}/pkgconfig/udev.pc
	rm ${D}${libdir}/pkgconfig/libudev.pc
	rm ${D}${base_libdir}/libudev.so*
}
