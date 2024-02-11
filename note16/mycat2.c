#include <stdio.h>
#include <stdlib.h>
#define BSIZE 100

int main(int ac,char* av[]){
    char buf[BSIZE];
    char buf1[BSIZE];
    FILE *fp;
    int i = 1;

    if(ac == 1){
        printf("input file name:\n");
        
        if(fp == NULL){
            perror("fopen");
            exit(EXIT_FAILURE);
        }
        while(fgets(buf, BSIZE, stdin) != NULL){
            printf("%s",buf);
        }
    }else{
        while(av[i] != NULL){
            fp = fopen(av[i],"r");
            if(fp == NULL){
                perror("fopen");
                exit(EXIT_FAILURE);
            }
            while(fgets(buf, BSIZE, fp) != NULL){
                printf("%s",buf);
            }
            i = i + 1;
        }
    }

    if(fclose(fp) != 0){
        perror("fclose");
        exit(EXIT_FAILURE);
    }

}