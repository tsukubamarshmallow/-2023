#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 100

char* chomp(char* s){
    int i;
    for(i=0;s[i] != '\0';i++){
        if(s[i] == '\n'){
            s[i] = '\0';
        }
    }
}

int main(int ac, char* av[]){
    char s1[SIZE];
    char s2[SIZE];

    printf("input  first string:\n");
    chomp(fgets(s1,SIZE,stdin));
    printf("input  second string:\n");
    chomp(fgets(s2,SIZE,stdin));

    printf("the result of comparing(%s,%s) = %d\n",s1,s2,strcmp(s1,s2));
   
}