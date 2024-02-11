#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int myrandN(int n){
    return (int)( n * (rand()+1.0) / (RAND_MAX+1.0));
}

int main(int ac, char *av[]){
    int i;
    srand(time(NULL));
    
    for(i=0;i<20;i++){
        printf("%d\t",myrandN(6));
    }
}