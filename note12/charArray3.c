#include <stdio.h>

int main(int ac, char* av[]){
    char *s[] = {"one", "four", "three"};
    int i;
    char j = 'a';

    for(i=0; i<3; i++){
        printf("%c : %s\n", s[i][0], s[i]);
    }
    printf("%p",&s[0]);
    printf("%p",&s[1]);
    s[1] = &j;
    
}