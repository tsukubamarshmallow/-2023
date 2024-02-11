#include <stdio.h>
#include <stdlib.h>
#include <time.h>

enum card {A=1,J=11,Q,K};

int main(int ac,char* av[]){
    int c;
    srand(time(NULL));
    c = rand()%13 + 1;

    switch (c){
        case A :
        printf("You drew A.\n");
        break;
        case K :
        printf("you drew K.\n");
        break;
        case Q :
        printf("you drew Q.\n");
        break;
        case J :
        printf("you drew J.\n");
        break;
        default :
        printf("you drew %d",c);
    };    
}