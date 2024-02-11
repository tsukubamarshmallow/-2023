#include <stdio.h>
#include <stdlib.h>

int main(int ac, char* av[]){
    int *p;
    int i;

    p = (int*)malloc(sizeof(int)*5);
    if(p == NULL){
        printf("memory allocation failure.\n");
        exit(1);
    }

    for(i=0; i<5; i++){
        p[i] = (i+1)*3;
    }

    for(i=0; i<5; i++){
        printf("p[%d] = %d\n", i, p[i]);
    }
    free(p);
}