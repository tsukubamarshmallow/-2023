#include <stdio.h>

int main(void){
    int a[3][5] ;

    printf("size of int = %zu\n" , sizeof(int));
    printf("size of int = %zu\n" , sizeof(a[0]));
    printf("size of int = %zu\n" , sizeof(a[1]));
    printf("size of int = %zu\n" , sizeof(a[2]));
}