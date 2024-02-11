#include <stdio.h>
#include <stdlib.h>

struct various{
    char c;
    char i;
};

int main(int ac, char* av[]){
    struct various v;
    char *p;

    printf("size of v.c = %lu\n",sizeof(v.c));
    printf("address of v.c = %p\n",&v.c);
    printf("size of v.c = %lu\n",sizeof(v.i));
    printf("address of v.c = %p\n",&v.i);
    printf("size of v.c = %lu\n",sizeof(v));
    printf("address of v.c = %p\n",&v);
}