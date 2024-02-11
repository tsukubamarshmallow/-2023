#include <stdio.h>
#include <stdlib.h>
#define BSIZE 100

int main(int ac,char* av[]){
    FILE *fp;
    char buf[BSIZE];
    
    if(ac != 2){
        printf("abort!\n");
        exit(EXIT_FAILURE);
    }else{
        fp = fopen(av[1],"a");
        if(fp == NULL){
            perror("fopen");
            exit(EXIT_FAILURE);
        }

        while(fgets(buf,BSIZE,stdin) != NULL){
            int fc;
            fc = fprintf(fp,"%s",buf);
            if(fc < 0){
                perror("fprintf");
                exit(EXIT_FAILURE);
            }
        }
    }

    if(fclose(fp) != 0){
            perror("fclose");
            exit(EXIT_FAILURE);
    }

    
}