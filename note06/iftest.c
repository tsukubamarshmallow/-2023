#include <stdio.h>

int main(void){
    float a;
    float b;
    int x;


    a = 7;
    b = 6;

    if( a < b){
        printf("%s\n", "a < b");
    }else if( a > b){
        printf("%s\n", "a > b");
    }else{
        printf("%s\n", "a = b");
    }

}