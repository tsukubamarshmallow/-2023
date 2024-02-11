#include <stdio.h>

int main(int ac, char*av[]){
    int i, j ,k;
    int *p;

    p = &i;
    printf("%p\n", p);
    p = &j;
    printf("%p\n", p);
    p = &k;
    printf("%p\n", p);

}