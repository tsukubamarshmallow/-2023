#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define BSIZE 100

int main(int ac,char* av[]){
    char buf[BSIZE];
    FILE *fp1;
    char* p;
    int i;
    int j;
    int k;

    void printout(char* buf,int wc){
        /*タブコードが見つかれば,空白文字で置き換える*/
        int l1;
        l1 = strlen(buf);
        for(i=0;i<l1;i++){
            if(buf[i]=='\t'){
                for(k=0;k<wc;k++){
                    printf(" ");
                }
            }else{
                printf("%c",buf[i]);
            }
        }
    }
    if(ac == 1){
        printf("Please adhere to the following restrictions\n");
        printf("./s2212022.out file1\n");
        printf("./s2212022.out n file1\n");
        printf("./s2212022.out n file1 file2\n");
    }

    if(ac == 2){
        int wc = 2;
        char* file_name_r = av[1];
        /*読み込みファイルを書き出しファイルを準備する*/
        fp1 = fopen(file_name_r,"r");
        if(fp1 == NULL){
                perror("fopen");
                exit(EXIT_FAILURE);
            }
        /*ファイルを読みこむ*/
        while(fgets(buf, BSIZE,fp1) != NULL){
            printout(buf,wc);
        }   
    }

    if(ac == 3){
        int wc = atoi(av[1]);
        char* file_name_r = av[2];
         /*読み込みファイルを書き出しファイルを準備する*/
        fp1 = fopen(file_name_r,"r");
        if(fp1 == NULL){
                perror("fopen");
                exit(EXIT_FAILURE);
        }
        /*ファイルを読みこむ*/
        while(fgets(buf, BSIZE,fp1) != NULL){
            printout(buf,wc);
        } 
    }

    if(ac > 3){
        int wc = atoi(av[1]);
        for(j=2; j < ac; j++){
            char* file_name_r = av[j];
            /*読み込みファイルを書き出しファイルを準備する*/
            fp1 = fopen(file_name_r,"r");
            if(fp1 == NULL){
                    perror("fopen");
                    exit(EXIT_FAILURE);
            }
            /*ファイルを読みこむ*/
            while(fgets(buf, BSIZE,fp1) != NULL){
                printout(buf,wc);
            }
        }    
    }   
    printf("\n"); 
}