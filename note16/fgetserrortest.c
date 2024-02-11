#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BSIZE 100

int main(int ac, char* av[]){
    FILE *fp;
    char buf[BSIZE];

    if (ac != 2){
        printf("Abort\n");
        exit(EXIT_FAILURE);
    }
    
    fp = fopen(av[1],"w");
    if( fp == NULL){
        perror("fopen");
        exit(EXIT_FAILURE);
    }

    fgets(buf, BSIZE, fp);
    printf("%s", buf);

    if(ferror(fp) != 0){
        perror("fgets ****");
        exit(EXIT_FAILURE);
    }

    if (fclose(fp) != 0){
        perror("fclose");
        exit(EXIT_FAILURE);
    }
}