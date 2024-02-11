#include <stdio.h>
#include <string.h>

#define BSIZE 100

int main(int ac, char* av[]){
    char buf[BSIZE];
    
    char s0[] = "University of Tsukuba";
    char s[5];

    printf("s0 : %s\n", s0);
    printf("input: ");
    fgets(buf, BSIZE, stdin);
    strcpy(s, buf);
    printf("s = %s\n", s);
    printf("s0 = %s\n", s0);
    
}