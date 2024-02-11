#include <stdio.h>

int main(void){
    int a[] = {1,2,3,4,5,6,7,8,9};
    int i;

    for(i=0;i<9;i++){
        printf("a[%d] = %d\n",i,a[i]);
    }
}