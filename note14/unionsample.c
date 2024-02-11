#include <stdio.h>
union utag {
    char c;
    int i;
    double d;
};

int main(int ac, char* av[]){
    union utag u;
    u.c = 'c';
    printf("union.c: %c",u.c);
    u.i = 12345;
    printf("union.i: %d",u.i);
    u.d = 3.1234;
    printf("union.d: %f",u.d);

    printf("address of u.c is : %p\n",&u.c);
    printf("address of u.i is : %p\n",&u.i);
    printf("address of u.d is : %p\n",&u.d);

    printf("size of u = %lu \n", sizeof(u));
}