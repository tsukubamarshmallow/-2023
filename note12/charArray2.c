#include <stdio.h>

int main(int ac, char* av[]){
    int i;
    char s[][4] = {"one", "four","three"};
    for(i=0; i<3; i++){
        printf("%c : %s\n", s[i][0], s[i]);
    }

}