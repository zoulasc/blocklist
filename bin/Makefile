.include <bsd.own.mk>

MKMAN=no
PROGS=srvtest cltest blocklistd
SRCS.srvtest = bl.c srvtest.c
SRCS.cltest = cltest.c
SRCS.blocklistd = bl.c blocklistd.c conf.c
LDADD.blocklistd += -lutil
LPADD.blocklistd += ${LIBUTIL}

.include <bsd.prog.mk>
