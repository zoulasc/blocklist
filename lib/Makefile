# $NetBSD: Makefile,v 1.3 2015/01/22 18:46:15 christos Exp $

USE_SHLIBDIR=   yes

CPPFLAGS+=-D_REENTRANT
DPADD+=${LIBPTHREAD}
LPADD+=-lpthread
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
