#include <stdio.h>
#include <fcntl.h>

int main(int argc, char const *argv[])
{
    char s[20];
    FILE *r;
    FILE *o;

    r = fopen("/dev/random", "r");
    o = fopen("ex1.txt", "w");

    fread(&s, 1, 20, r);
    fputs(s, o);
    printf("%s", s);
    fclose(r);
    fclose(o);

    return (0);
}