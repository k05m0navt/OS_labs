#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void *realloc_2(void *ptr, int size)
{
    void *tmp;
    if (ptr == NULL)
        return (malloc(size));
    if (size == 0)
    {
        free(ptr);
        return NULL;
    }
    tmp = ptr;
    ptr = malloc(size * sizeof(void *));
    memcpy(ptr, tmp, size);

    return (ptr);
}

int main(int argc, char const *argv[])
{
    int n;
    int *ptr;
    int i;
    int m;

    n = 5;
    m = 10;
    ptr = malloc(n * sizeof(int));
    for (i = 0; i < n; i++)
    {
        ptr[i] = i;
        printf("%d ", ptr[i]);
    }
    printf("\n");
    realloc_2(ptr, m);
    for (int i = 0; i < m; i++)
        printf("%d ", ptr[i]);

    return 0;
}
