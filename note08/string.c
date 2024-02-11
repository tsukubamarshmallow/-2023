#include <stdio.h>

int main(void){
    char s[] = "abcdefg";
    int i;
    
    printf("%s\n",s);

    for(i=0; s[i] != '\0';i++){
        printf("%c\n", s[i]);
    }
}