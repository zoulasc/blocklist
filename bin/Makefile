# $NetBSD: Makefile,v 1.5 2015/01/21 16:16:00 christos Exp $

BINDIR=/usr/sbin

PROGS=blocklistd blocklistctl
MAN.blocklistd=blocklistd.8
MAN.blocklistctl=blocklistctl.1
MLINKS=blocklistd.8 blocklistd.conf.5
SRCS.blocklistd = blocklistd.c conf.c run.c state.c util.c
SRCS.blocklistctl = blocklistctl.c conf.c state.c util.c
DBG=-g

LDADD+=-lutil
DPADD+=${LIBUTIL}

.include <bsd.prog.mk>
