#include <stdio.h>
#include <string.h>

#define BSIZE 100
char* mystrcpy(char *dest, char *src){
    int i;
    for(i=0;src[i] != '\0';i++){
        dest[i] = src[i];
    }
}
int main(int ac, char* av[]){
    char s[BSIZE];
    char s1[BSIZE];
    char s2[BSIZE];
    printf("input string: ");
    fgets(s, BSIZE, stdin);

    mystrcpy(s1, s);
    printf("s1 = %s", s1);

    strncpy(s2, s, 3);

    printf("s2 = %s", s2);
}