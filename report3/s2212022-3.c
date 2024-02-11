#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define ASIZE 100
char* chomp(char* s){
    int i;
    for(i=0;s[i] != '\0';i++){
        if(s[i] == '\n'){
            s[i] = '\0';
        }
    }
}
char* mystrcat(char* s1, char* s2){
    int l1;
    int l2;
    int size;
    int i;
    char *p;
    l1 = strlen(s1);
    l2 = strlen(s2);
    size = l1 + l2 +4;
    p = (char*)malloc(size);
    for(i=0;i<sizeof(s1);i++){
        if(s1[i] != '\0'){
            p[i] = s1[i];
        }
    }
    for(i=0;i<sizeof(s2);i++){
        p[l1+i] = s2[i];
    }
    
    return p;
}
int main(int ac, char* av[]){
    char s1[ASIZE];
    char s2[ASIZE];

    printf("input  first string:\n");
    chomp(fgets(s1,ASIZE,stdin));
    printf("input  second string:\n");
    chomp(fgets(s2,ASIZE,stdin));

    printf("the result of mystrcat(%s,%s) = %s\n",s1,s2,mystrcat(s1,s2));
   
}