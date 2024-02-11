#include <stdio.h>

int main(void){
    int i;
    int sum;
    i = 1;
    sum = 0;
    while(i <= 10000){
        if(i%5 == 0 ||i%7 == 0 ){
        sum = sum + i;
        }
        i = i + 1;
    }
    printf("%d\n", sum);
}