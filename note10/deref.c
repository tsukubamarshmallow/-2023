#include <stdio.h>

int main(int ac,char* av[]){
    int i=10, j=20, k=30;
    int *p;

    p = &i;
    printf("%d\n", *p);
    p = &j;
    printf("%d\n", *p);
    p = &k;
    printf("%d\n", *p);

}