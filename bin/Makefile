# $NetBSD: Makefile,v 1.11 2015/01/27 19:40:36 christos Exp $

BINDIR=/sbin

PROGS=blocklistd blocklistctl
MAN.blocklistd=blocklistd.8 blocklistd.conf.5
MAN.blocklistctl=blocklistctl.8
SRCS.blocklistd = blocklistd.c conf.c run.c state.c support.c internal.c
SRCS.blocklistctl = blocklistctl.c conf.c state.c support.c internal.c
DBG=-g

LDADD+=-lutil
DPADD+=${LIBUTIL}

.PATH: ${.CURDIR}/../port
SRCS.blocklistd+= popenve.c strtoi.c
SRCS.blocklistctl+= strtoi.c
CPPFLAGS+=-DHAVE_CONFIG_H

.include <bsd.prog.mk>
