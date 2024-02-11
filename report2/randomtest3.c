#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int ac, char *av[]){
    int i;
    srand(time(NULL));

    for(i=0;i<20;i++){
        printf("%d\n",rand());
    }
}