HOMEPAGE = "https://barebox.org/"
SECTION = "bootloaders"

#LIC_FILES_CHKSUM = "file://COPYING;md5=f5125d13e000b9ca1f0d3364286c4192"
#INSANE_SKIP += "barebox:license-checksum"
LICENSE = "CLOSED"

#PV = "2025.02.0"
#SRC_URI = "https://barebox.org/download/barebox-${PV}.tar.bz2"
SRC_URI = "git://github.com/a3f/barebox.git;branch=beaglebone-yocto-next;protocol=https"
#SRC_URI[sha256sum] = "6da5f9e98a8c93f6eead3badefe133ed5fd865395b1a3c0192fdbdd9eb4f7311"



SRCREV = "19a8e5db5bc6cab89917b2d0063a73965ec66e7c"
