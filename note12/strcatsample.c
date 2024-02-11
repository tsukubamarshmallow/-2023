#include <stdio.h>
#include <string.h>

#define BSIZE 100

int main(int ac, char* av[]){
    char s0[BSIZE];
    char s1[BSIZE];
    char s0d[BSIZE];

    printf("input string(s0): ");
    fgets(s0, BSIZE, stdin);

    strcpy(s0d, s0);

    printf("input another string(s1): ");
    fgets(s1, BSIZE, stdin);

    strcat(s0, s1);
    printf("cat s0 s1 = \"%s\"\n", s0);

    strncat(s0d, s1, 3);
    printf("ncat s0 s1 = \"%s\"\n", s0d);
}