#include <stdio.h>

int main (int ac, char* av[]){
    int i = 1000;
    int *p;
    p = &i;
    printf("%p\n",p);
    printf("%p\n",&p[1]);
    

}