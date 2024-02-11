#include <stdio.h>

void swap(int *a,int *b){
    int tmp;

    printf("\nswap : before\n");
    printf("a = %d\n", *a);
    printf("b = %d\n", *b);

    tmp = *a;
    *a = *b;
    *b = tmp;

    printf("\nswap : after\n");
    printf("a = %d\n", *a);
    printf("b = %d\n", *b);
}

int main(int ac, char* av[]){
    int a=5, b=10;

    printf("main : before\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    swap(&a,&b);

    printf("main : after\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);


}