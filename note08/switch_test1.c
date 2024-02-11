#include <stdio.h>

int main(void){
    switch (2){
        default : printf("no");
        case 1 : printf("*");
                 break;
        case 2 : printf("**");
                 break;
        case 3 : printf("***");
        case 4 : printf("****");
    }
}