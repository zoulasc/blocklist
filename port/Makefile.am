#
ACLOCAL_AMFLAGS = -Im4
lib_LTLIBRARIES = libblocklist.la
include_HEADERS = blocklist.h

bin_PROGRAMS = blocklistd blocklistctl

VPATH = ../bin:../lib:../test

AM_CPPFLAGS = -I../include 
AM_CFLAGS = @WARNINGS@

libblocklist_la_SOURCES = bl.c blocklist.c
libblocklist_la_LDFLAGS = -no-undefined -version-info 0:0:0
libblocklist_la_LIBADD = $(LTLIBOBJS)

SRCS = internal.c util.c run.c conf.c state.c
blocklistd_SOURCES = blocklistd.c ${SRCS}
blocklistd_LDADD = libblocklist.la
blocklistctl_SOURCES = blocklistctl.c ${SRCS}
blocklistctl_LDADD = libblocklist.la
