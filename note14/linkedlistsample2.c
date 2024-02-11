#include <stdio.h>
#include <stdlib.h>

#define BUFSIZE 100
struct Element {
    int val;
    struct Element *next;
};
struct Element *getElement(int n){
    struct Element *p;

    p = (struct Element*)malloc(sizeof(struct Element));
    if(p == NULL){
        printf("Memory allocation error\n");
        exit(EXIT_FAILURE);
    }

    p->val = n;
    p->next = NULL;
    return p;
}
int getint(){
    char buf[BUFSIZE];

    if(fgets(buf,BUFSIZE,stdin) != NULL){
        return atoi(buf);
    }
    else{
        return 0;
    }
}


int main(int ac,char* av[]){
    struct Element *tmp1, *tmp2, *h, *t;
    int i;
    int j;

    tmp1 = getElement(0);
    h=t=tmp1;

    while(1){
        printf("input a number (quit when 0)");
        i = getint();
        if(i == 0){
            break;
        }
        tmp1 = getElement(i);
        t->next = tmp1;
        t = tmp1;
    } 
    printf("input a number (quit when 0)");
    j = getint();

    for(tmp2=h->next;tmp2 != NULL;tmp2 = tmp2->next){
        if(tmp2->val == j){
            printf("リストの中に入力された値が見つかりました");
            break;
        }
    } 
}