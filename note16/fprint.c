#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BSIZE 100

int main(int ac, char* av[]){
    FILE *fp;
    char buf[BSIZE];
    int fc;

    if (ac != 2){
        printf("Abort\n");
        exit(EXIT_FAILURE);
    }
    
    fp = fopen(av[1],"w");
    if( fp == NULL){
        perror("fopen");
        exit(EXIT_FAILURE);
    }

    fc = fprintf(fp, "nakai\n");
    if (fc < 0){
        perror("fprintf");
        exit(EXIT_FAILURE);
    }
 

    if(ferror(fp) != 0){
        perror("fgets ****");
        exit(EXIT_FAILURE);
    }

    if (fclose(fp) != 0){
        perror("fclose");
        exit(EXIT_FAILURE);
    }
}