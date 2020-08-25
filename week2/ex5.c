#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void    pascal_triangle(int n)
{
    int     i;
    int     j;
    int     k;

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n-i; j++)
            printf(" ");
        for (k = 0; k < 2*i-1; k++)
            printf("*");
        printf("\n");
    }
}

void    square_figure(int n)
{
    int     i;
    int     j;

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
            printf("*");
        printf("\n");
    }
}

void    right_side_triangle(int n)
{
    int     i;
    int     k;

    for (i = 0; i < n; i++)
    {
        for (k = 0; k < 2*i-1; k++)
            printf("*");
        printf("\n");
    }
}

int     main(int argc, char **argv)
{
    int     n;

    n = atoi(argv[1]);
    if (atoi(argv[2]) == 1)
        pascal_triangle(n);
    else if (atoi(argv[2]) == 2)
        square_figure(n);
    else
        right_side_triangle(n);
    return (0);
}