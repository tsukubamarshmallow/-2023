#include <stdio.h>

int main(void){
    int i=10;
    int j=5;

    printf("i=%d\n", i);
    printf("j=%d\n", j);

    {
        int i = 20;
        printf("i=%d\n", i);
        printf("j=%d\n", j);
    }

    printf("i=%d\n", i);
    printf("j=%d\n", j);
}