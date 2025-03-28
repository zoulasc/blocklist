#ifndef _GNU_SOURCE
#define _GNU_SOURCE
#endif
#include <sys/param.h>
#include <stdio.h>
#include <inttypes.h>
#include <time.h>
#include <sys/stat.h>
#include <netdb.h>

#ifndef __unused
#define __unused __attribute__((__unused__))
#endif

#ifndef __dead
#define __dead __attribute__((__noreturn__))
#endif

#ifndef __BEGIN_DECLS
#define __BEGIN_DECLS
#endif

#ifndef __END_DECLS
#define __END_DECLS
#endif

#ifndef MIN
#define MIN(a,b) ((a) < (b) ? (a) : (b))
#endif

#ifndef MAX
#define MAX(a,b) ((a) > (b) ? (a) : (b))
#endif

#ifndef __RCSID
#define __RCSID(a)
#endif

#ifndef __UNCONST
#define __UNCONST(a) ((void *)(intptr_t)(a))
#endif

#ifndef __arraycount
#define __arraycount(a) (sizeof(a) / sizeof(a[0]))
#endif

#ifndef __STRING
#define __STRING(x)	#x
#endif

#ifndef HAVE_STRLCPY
size_t strlcpy(char *, const char *, size_t);
#endif

#ifndef HAVE_STRLCAT
size_t strlcat(char *, const char *, size_t);
#endif

#ifndef HAVE_POPENVE
FILE *popenve(const char *, char *const *, char *const *, const char *);
int pcloseve(FILE *);
#define pclose(a) pcloseve(a);
#endif

#ifndef HAVE_SOCKADDR_SNPRINTF
struct sockaddr;
int sockaddr_snprintf(char *, size_t, const char *, const struct sockaddr *);
#endif

#ifndef HAVE_STRTOI
intmax_t strtoi(const char *, char **, int, intmax_t, intmax_t, int *);
#endif

#ifndef HAVE_GETPROGNAME
const char *getprogname(void);
void setprogname(char *);
#endif

#ifndef HAVE_PIDFILE
int pidfile(const char *);
#endif

#ifndef HAVE_FPARSELN
#define FPARSELN_UNESCALL	0xf
#define FPARSELN_UNESCCOMM	0x1
#define FPARSELN_UNESCCONT	0x2
#define FPARSELN_UNESCESC	0x4
#define FPARSELN_UNESCREST	0x8
char *fparseln(FILE *, size_t *, size_t *, const char delim[3], int);
#endif

#ifndef HAVE_FGETLN
char *fgetln(FILE *, size_t *);
#endif

#ifndef HAVE_CLOCK_GETTIME
struct timespec;
int clock_gettime(int, struct timespec *);
#define CLOCK_REALTIME 0
#endif

#ifndef HAVE_VSYSLOG_R
#define	SYSLOG_DATA_INIT	{ 0 }
struct syslog_data {
        int dummy;
};
void vsyslog_r(int, struct syslog_data *, const char *, va_list);
#endif
