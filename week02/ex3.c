#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int     main(int argc, char **argv)
{
    int     i;
    int     j;
    int     k;
    int     n;

    n = atoi(argv[1]);
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n-i; j++)
            printf(" ");
        for (k = 0; k < 2*i-1; k++)
            printf("*");
        printf("\n");
    }
    return (0);
}