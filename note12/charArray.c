#include <stdio.h>

int main(int ac, char* av[]){
    char s[] = "date";
   
    printf("%p\n", &s);

    s[0] = 'D';

    printf("%p\n", &s);
}