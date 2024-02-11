#include <stdio.h>
union utag {
    char c;
    int i;
    double d;
};

int main(int ac, char* av[]){
    union utag u;
    u.c = 'c';
    u.i = 12345;
    printf("%c",u.c);
}