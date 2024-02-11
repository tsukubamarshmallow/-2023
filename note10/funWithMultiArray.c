#include <stdio.h>

#define SIZE 4

void hoge(int a[SIZE][SIZE]){
    int i, j;

    for(i=0;i<SIZE;i++){
        for(j=0;j<SIZE;j++){
            /* printf("a[%d][%d] = 5d\n", i, j, a[i][j]); */
            printf("%3d", a[i][j]);
        }
        printf("\n");
    }
}

int main(int ac,char* av[]){
    int a[SIZE][SIZE] = { {1, 2, 3, 4},
                          {5, 6, 7, 8},
                          {9, 10, 11, 12},
                          {13, 14, 15, 16}};
    hoge(a);                      


}
