#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <sys/mman.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <sys/types.h>

int main(int argc, char const *argv[])
{

    int so;
    int de;
    size_t size;
    char *s;
    char *d;

    so = open("ex1.txt", O_RDONLY);
    size = lseek(so, 0, SEEK_END);
    s = mmap(NULL, size, PROT_READ, MAP_PRIVATE, so, 0);
    de = open("ex1.memcpy.txt", O_RDWR | O_CREAT, 0666);
    ftruncate(de, size);
    d = mmap(NULL, size, PROT_READ | PROT_WRITE, MAP_SHARED, de, 0);
    memcpy(d, s, size);

    return 0;
}