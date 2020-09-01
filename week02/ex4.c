#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void    swap(int *p1, int *p2)
{
    int     t;

    t = *p1;
    *p1 = *p2;
    *p2 = t;
}

int     main()
{
    int     int1;
    int     int2;

    scanf("%d", &int1);
    scanf("%d", &int2);
    swap(&int1, &int2);
    return (0);
}