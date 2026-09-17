#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <time.h>

extern char *tzname[];

int main()
{
    time_t now;
    struct tm *sp;

    time(&now);

    printf("%s", ctime(&now));

    putenv("TZ=America/Los_Angeles");

    sp = localtime(&now);
    printf("%d/%d/%02d %d:%02d %s\n",
            sp->tm_mon + 1, sp->tm_mday,
            1900 + sp->tm_year, sp->tm_hour,
            sp->tm_min, tzname[sp->tm_isdst]);

    exit(0);
}