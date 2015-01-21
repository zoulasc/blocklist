# $NetBSD: Makefile,v 1.6 2015/01/21 19:23:42 christos Exp $

BINDIR=/usr/sbin

PROGS=blocklistd blocklistctl
MAN.blocklistd=blocklistd.8
MAN.blocklistctl=blocklistctl.8
MLINKS=blocklistd.8 blocklistd.conf.5
SRCS.blocklistd = blocklistd.c conf.c run.c state.c util.c
SRCS.blocklistctl = blocklistctl.c conf.c state.c util.c
DBG=-g

LDADD+=-lutil
DPADD+=${LIBUTIL}

.include <bsd.prog.mk>
