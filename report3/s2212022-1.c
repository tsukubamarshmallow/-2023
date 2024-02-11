#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define ASIZE 10

char* chomp(char* s){
    int i;
    for(i=0;s[i] != '\0';i++){
        if(s[i] == '\n'){
            s[i] = '\0';
        }
    }
}


int main(int ac,char* av[]){
    char* s[ASIZE];
    char search[ASIZE];
    int i;
    
    for(i=0;i<ASIZE;i++){
        char buf[ASIZE];
        char* p;
        printf("input string:");
        chomp(fgets(buf,ASIZE,stdin));
        p = (char*)malloc(sizeof(strlen(buf) + 1));
    
        if(p == NULL){
            printf("Memory allocation error!\n");
            exit(EXIT_FAILURE);
        }
        strcpy(p,buf);
        s[i] = p;
    }
    printf("input string list\n");
    printf("-----------------\n");
    for(i=0;i<ASIZE;i++){
        printf("No.%d :%s \n",i+1,s[i]);
    }
    printf("-----------------\n");
    
    printf("search string:");
    chomp(fgets(search,ASIZE,stdin));

    for(i=0;i<ASIZE;i++){
        if(strcmp(s[i],search) == 0){
            printf("found at index %d in the array : %s",i+1,s[i]);
            break;
        }
        if(i == ASIZE -1){
            printf("not found :%s\n",search);
        }
    }
    
}