#include <stdio.h>
#include <stdlib.h>

struct various{
    char c;
    char i;
};

int main(int ac, char* av[]){
    struct various v;

    printf("size of v.c = %lu\n",sizeof(v.c));
    printf("size of v.c = %lu\n",sizeof(v.i));
    printf("size of v.c = %lu\n",sizeof(v));
}