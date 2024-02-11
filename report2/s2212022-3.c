#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int myrandM2N(int m ,int n){
    return (int)(m + (n + 1 - m)* (rand()+1.0) / (RAND_MAX+1.0));
}

int main(int ac, char *av[]){
    int i;
    int min;
    int max;
    int rep;
    min = atoi(av[1]);
    max = atoi(av[2]);
    rep = atoi(av[3]);
    srand(time(NULL));
    
    if(ac != 4){
        printf("Usage:a.out m n c\n 0 < m < n < 100 \n c is the number of repetition");
        exit(1);
    }
    
    if(min > max|| max < 1 || max > 99 || min < 1 || min >99){
        printf("Usage:a.out m n c\n 0 < m < n < 100 \n ");
        exit(1);
    }
    
    for(i=0;i<rep;i++){
        printf("%d\t",myrandM2N(min,max));
    }
}