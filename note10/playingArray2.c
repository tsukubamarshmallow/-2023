#include <stdio.h>

int main(int ac, char* av[]){
    int a[5] = { 1, 2, 3, 4, 5 };
    int *p;
    int i;

    p = &a[2];

    for(i=-4; i<3; i++){
        printf("p[%2d] = %d\n", i, p[i]);
    }
}