 
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <unistd.h>
#include <sys/types.h>

int main()
{
    int     i;

    for(i = 0;i < 3;i++)
        fork();
    sleep(5);
    return (0);
}