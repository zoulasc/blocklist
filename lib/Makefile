# $NetBSD: Makefile,v 1.4 2015/12/30 16:42:48 christos Exp $

USE_SHLIBDIR=   yes

CPPFLAGS+=-D_REENTRANT
DPADD+=${LIBPTHREAD}
LDADD+=-lpthread
LIB=blocklist
SRCS=bl.c blocklist.c
MAN=libblocklist.3
MLINKS+=libblocklist.3 blocklist_open.3
MLINKS+=libblocklist.3 blocklist_close.3
MLINKS+=libblocklist.3 blocklist.3
MLINKS+=libblocklist.3 blocklist_r.3
MLINKS+=libblocklist.3 blocklist_sa.3
MLINKS+=libblocklist.3 blocklist_sa_r.3

.include <bsd.lib.mk>
