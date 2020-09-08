#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <unistd.h>
#include <sys/types.h>

int     main()
{
    int     n;
    pid_t   p;

    n = 0;
    p = fork();
    if (p == 0)
        printf("Hello from child %d\n", getpid()-n);
    else if (p > 0)
        printf("Hello from parent %d\n", getpid()-n);
    else
        printf("Unable to create child process.\n");
    return (0);
}