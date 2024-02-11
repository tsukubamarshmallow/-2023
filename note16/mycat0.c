#include <stdio.h>
#include <stdlib.h>
#define BSIZE 100
int main(int ac,char* av[]){
    char buf[BSIZE];
    FILE *fp;
    if(ac !=2){
        printf("abort!\n");
        exit(EXIT_FAILURE);
    }

    fp = fopen(av[1],"r");
    if(fp == NULL){
        perror("fopen");
        exit(EXIT_FAILURE);
    }

    while(fgets(buf, BSIZE, fp) != NULL){
        printf("%s",buf);
    }

    if(fclose(fp) != 0){
        perror("fclose");
        exit(EXIT_FAILURE);
    }
}