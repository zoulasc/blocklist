# $NetBSD$

BINDIR=/usr/sbin

PROGS=blocklistd blocklistctl
MAN=blocklistd.8
MLINKS=blocklistd.8 blocklistd.conf.5
SRCS.blocklistd = blocklistd.c conf.c run.c state.c
SRCS.blocklistctl = blocklistctl.c conf.c state.c

LDADD+=-lutil
DPADD+=${LIBUTIL}

.include <bsd.prog.mk>
