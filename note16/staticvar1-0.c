#include <stdio.h>

int count(void){
    static int c=0;

    return c++;
}

int main(int ac,char* av[]){
    int i;
    global int c;

    for(i=0; i<10; i++){
        printf("%d\n", count());
    }
}