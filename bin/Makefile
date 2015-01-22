# $NetBSD: Makefile,v 1.9 2015/01/22 03:08:09 christos Exp $

BINDIR=/sbin

PROGS=blocklistd blocklistctl
MAN.blocklistd=blocklistd.8
MAN.blocklistctl=blocklistctl.8
MLINKS=blocklistd.8 blocklistd.conf.5
SRCS.blocklistd = blocklistd.c conf.c run.c state.c support.c internal.c
SRCS.blocklistctl = blocklistctl.c conf.c state.c support.c internal.c
DBG=-g

LDADD+=-lutil
DPADD+=${LIBUTIL}

.include <bsd.prog.mk>
