#include <stdio.h>
#include <stdlib.h>

int main(int ac,char* av[]){
    FILE *fp;
    if(ac !=2){
        printf("abort!\n");
        exit(EXIT_FAILURE);
    }

    fp = fopen(av[1],"a");
    if(fp == NULL){
        perror("fopen");
        exit(EXIT_FAILURE);
    }

    if(fclose(fp) != 0){
        perror("fclose");
        exit(EXIT_FAILURE);
    }
}