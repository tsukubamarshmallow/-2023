#include <stdio.h>
#include <stdlib.h>

int main(int ac, char *av[]){
    int i;
    srand(314);

    for(i=0;i<20;i++){
        printf("%d\n",rand());
    }
}