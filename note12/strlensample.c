#include <stdio.h>
#include <string.h>

#define BSIZE 100

int mystrlen(char *s){
    int count = 0;
    while(1){
        if(s[count] != '\0'){
            count = count + 1;
        }else{
            break;
        }
    }
    return count-1;
}

int main(int ac, char* av[]){
    char s[BSIZE];

    printf("input string: ");
    fgets(s, BSIZE, stdin);

    printf("the length is %d\n", mystrlen(s));
}

