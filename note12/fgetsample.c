#include <stdio.h>

int main(int ac, char* av[]){
    char s[10];
    fgets(s, 10, stdin);
    printf("%s\n", s);
}