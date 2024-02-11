#include <stdio.h>

double area(double r);

int main(void){
    double r = 5.0;

    printf(" the area of circle with radios %lf is %lf\n", r , area(r));


}

double area(double r){
    return 3.14 * r * r ;
}