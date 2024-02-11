#include <stdio.h>
#include <string.h>

#define BSIZE 100

char* chomp(char* s){
    int i;
    for(i=0;s[i] != '\0';i++){
        if(s[i] == '\n'){
            s[i] = '\0';
        }
    }
}

int main(int ac, char* av[]){
    int i;
    char s0[BSIZE];
    char s1[BSIZE];
    char *res;

    fgets(s0, BSIZE, stdin);
    fgets(s1, BSIZE, stdin);
    chomp(s1);
    res = strstr(s0, s1);
    if(res ==NULL){
        printf("not found\n");
    }else{
        printf("the result of strstr is %s\n", res);
    }
     
}