#	$NetBSD$

WARNS=6
LDADD+=	-lblocklist
DPADD+= ${LIBBLOCKLIST}
CPPFLAGS+= -I${.CURDIR}/../include
