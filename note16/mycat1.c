#include <stdio.h>
#include <stdlib.h>
#define BSIZE 100

char* chomp(char* s){
    int i;
    for(i=0;s[i] != '\0';i++){
        if(s[i] == '\n'){
            s[i] = '\0';
        }
    }
}

int main(int ac,char* av[]){
    char buf[BSIZE];
    char buf1[BSIZE];
    FILE *fp;
    if(ac == 1){
        printf("input file name:\n");
        
        if(fp == NULL){
            perror("fopen");
            exit(EXIT_FAILURE);
        }
        while(fgets(buf, BSIZE, stdin) != NULL){
            printf("%s",buf);
        }
    }

    if(ac == 2){
        fp = fopen(av[1],"r");
        if(fp == NULL){
            perror("fopen");
            exit(EXIT_FAILURE);
        }
        while(fgets(buf, BSIZE, fp) != NULL){
            printf("%s",buf);
        }
    }

    if(fclose(fp) != 0){
        perror("fclose");
        exit(EXIT_FAILURE);
    }

}