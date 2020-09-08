 
#include <stdio.h>
#include <unistd.h>

int main()
{
    int     i;

    for(i = 0;i < 3;i++)
        fork();
    sleep(5);
    return (0);
}

/*
 * So, each fork creates no more than 2 process =>
 * => if we run process n times it creates no more than 2^n process.
 * For our cases, if n=3 and n=5 number of process no more than 8 and 32 respectively
 */