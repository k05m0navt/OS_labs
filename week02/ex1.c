#include <stdio.h>
#include <limits.h>
#include <float.h>

int     main()
{
    int     i;
    float   f;
    double  d;

    i = INT_MAX;
    f = FLT_MAX;
    d = DBL_MAX;
    printf("Size: %i, Value: %i\n", sizeof(i), i);
    printf("Size: %i, Value: %f\n", sizeof(f), f);
    printf("Size: %i, Value: %lf\n", sizeof(d), d);
    return (0);
}