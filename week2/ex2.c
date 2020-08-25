#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int     main()
{
    char    str[100];
    int     k;

    scanf("%s", str);
    for(k = strlen(str)-1; k >= 0; k--)
        printf("%c", *(sizeof(char)*k + str));
    return (0);
}