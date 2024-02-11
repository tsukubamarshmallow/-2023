#include <stdio.h>

int main(int ac, char *av[]){
    int i = 50;
    int a[] = { 1, 2, 3, 4, 5};
    int j = 100;

    printf("a[-1234567891011111111111111111] = %d\n", a[-1]);

    printf("&i     = %p\n",&i);

    for(i=-1; i<5; i++){
        printf("&a[%2d]  = %p\n", i, &a[i]);
    }

    printf("&j           = %p\n", &j);
}