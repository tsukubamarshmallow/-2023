#include <stdio.h>

int main(void){
    int i = 1;
    double d1 = 0.1;
    double d2 = 0.0;

    printf("%1.18f\n", d1);

    while(i <= 10){
        d2 = d2 + d1;
    }
    
    printf("%1.18f\n", d2);


}