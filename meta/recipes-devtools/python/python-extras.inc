SUMMARY = "Useful extra bits for Python - things that should be in the standard library"
HOMEPAGE = "https://pypi.org/project/extras/"
SECTION = "devel/python"
LICENSE = "Apache-2.0"
LIC_FILES_CHKSUM = "file://LICENSE;md5=6d108f338b2f68fe48ac366c4650bd8b"

inherit pypi

SRC_URI[sha256sum] = "132e36de10b9c91d5d4cc620160a476e0468a88f16c9431817a6729611a81b4e"

BBCLASSEXTEND = "nativesdk"
