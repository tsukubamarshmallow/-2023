#include <stdio.h>

int main(void){
    int a;
    float b;
    float c;
    int d;
    int e;

    a = 1*2*3*5*6/4;
    b = 1.03*1.23;
    c = 1.03*1.23*5;
    d = (5 < 7);
    e = (5 <7) && (6 < 10);

    printf("%d\n", a);
    printf("%f\n", b);
    printf("%f\n", c);
    printf("%d\n", d);
    printf("%d\n", e);


}