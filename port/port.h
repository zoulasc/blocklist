#include <stdio.h>
#include <inttypes.h>
#include <time.h>

#ifndef __unused
#define __unused __attribute__((__unused__))
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

#endif

#ifndef HAVE_CLOCK_GETTIME
struct timespec;
int clock_gettime(int, struct timespec *);
#define CLOCK_REALTIME 0
#endif
