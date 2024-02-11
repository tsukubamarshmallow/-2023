#include <stdio.h>

#define ASIZE 5

void hoge(int a[]){
    int i;

    printf("hoge\n");
    for(i=0; i<ASIZE; i++){
        printf("a[%d] = %d\n", i, a[i]);
        a[i] = i*i;
    }
}

    int main(int ac, char* av[]){
        int a[] = { 1, 2, 3, 4, 5 };
        int i;

        hoge(a);

        printf("\nmain\n");
        for(i=0;i<ASIZE;i++){
            printf("a[%d] = %d\n", i, a[i]);
        }
    }