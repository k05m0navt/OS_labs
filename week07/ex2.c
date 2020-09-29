#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int N;
    int *arr;
    int i;

    scanf("%d", &N);
    arr = (int *)malloc(N * sizeof(int));
    for (i = 0; i < N; i++)
    {
        arr[i] = i;
        printf("%d ", arr[i]);
    }
    free(arr);

    return 0;
}
