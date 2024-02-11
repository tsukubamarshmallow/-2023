#include <stdio.h>

int main(int ac, char* av[]){
    int a[5] = { 1, 2, 3, 4, 5 };
    int *p;
    int i;

    p = a;
    for(i=0;i<5; i++){
        printf("p[%d] = %d\n",i,*p++);
        printf("a[%d] = %d\n\n", i, a[i]);
    }
}