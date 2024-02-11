#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int myrandM2N(int m ,int n){
    return (int)(m + (n + 1 - m)* (rand()+1.0) / (RAND_MAX+1.0));
}

int main(int ac, char *av[]){
    int i;
    srand(time(NULL));
    
    for(i=0;i<25;i++){
        printf("%d\t",myrandM2N(1,10));
    }
}