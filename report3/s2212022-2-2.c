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

int mystrcmp(const char *s1,const char *s2){
    int l1;
    int l2;
    int i;

    l1 = strlen(s1);
    l2 = strlen(s2);
    if(l1>=l2){
        for(i=0;i<l2;i++){
            if(s1[i] != s2[i]){
                return i;
            }
        }
        if(l1 != l2){
            return l2;
        }else{
            return -1;
        }
    }

    if(l1<l2){
        for(i=0;i<l1;i++){
            if(s1[i] != s2[i]){
                return i;
            }
        }
        return l1;
    }
}

int main(int ac, char* av[]){
    char s1[SIZE];
    char s2[SIZE];

    printf("input  first string:\n");
    chomp(fgets(s1,SIZE,stdin));
    printf("input  second string:\n");
    chomp(fgets(s2,SIZE,stdin));

    printf("the result of comparing(%s,%s) = %d\n",s1,s2,mystrcmp(s1,s2));
   
}