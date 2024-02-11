#include <stdio.h>

int main(void){
    char *str1 = "a";
    char *str2 = "b";
    printf("%p",&str1[1]);
    printf("%p",&str2[0]);
}