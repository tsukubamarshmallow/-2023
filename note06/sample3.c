#include <stdio.h>

int main(void){
    unsigned char c;
    double d;

    c = 255;
    c = c + 1;
    printf("%d\n", c);
    d = 3.14;
    c = d;
    printf("%d\n", c);
}