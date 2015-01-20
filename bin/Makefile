.include <bsd.own.mk>

WARNS=6
COPTS=-g
MKMAN=no
PROGS=srvtest cltest blocklistd
SRCS.srvtest = bl.c srvtest.c
SRCS.cltest = cltest.c
SRCS.blocklistd = bl.c blocklistd.c conf.c run.c state.c
LDADD.blocklistd += -lutil
LPADD.blocklistd += ${LIBUTIL}

.include <bsd.prog.mk>
