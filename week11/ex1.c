#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <sys/mman.h>
#include <sys/stat.h>
#include <fcntl.h>

int main(int argc, char const *argv[])
{
    int f;
    struct stat st;
    char *adr;
    char s[] = "This is a nice day";

    f = open("ex1.txt", O_RDWR);

    ftruncate(f, strlen(s));
    stat("ex1.txt", &st);
    adr = mmap(NULL, st.st_size, PROT_READ | PROT_WRITE, MAP_SHARED, f, 0);
    memcpy(adr, s, strlen(s));
    munmap(adr, st.st_size);

    close(f);

    return (0);
}