#include <stdio.h>

int fact(int n){
    if(n==1){
        return 1 ;
    }else{
        return n*fact(n-1);
    }
}

int main(void){
    int i=1;
    while(i<11){
        printf("fact(%d) = %d\n", i ,fact(i));
        i++;
    }
}