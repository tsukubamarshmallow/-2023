#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define ASIZE 5
#define BSIZE 100

char* mallocstring(const char *s){
    int i;
    char* charp;
    int count;
    for(i=0; s[i] != '\0'; i++){
        count = count + 1;
    }
    charp = (char*)malloc((sizeof(char)+1)*count);
    if(charp == NULL){
        exit(EXIT_FAILURE);
    }else{
        strcpy(charp, s);
    }
    return p;
}