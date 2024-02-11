#include <stdio.h>

int main (void){
    printf("%lf\n", 3.14159);
    printf("%lf\n", 314159e-5);
    printf("%e\n", 3.14159);
    printf("%E\n", 314159e-5);

    printf("%lf\n", .123);
    printf("%lf\n", 2.);
    printf("%c", "\'");
}