#include <stdio.h>
#include <stdlib.h>

#define BUFSIZE 100

struct Element{
    int val;
    struct Element *prev;
    struct Element *next;
};

struct ELement *getElement(int i){
    struct Element *P;

    p = (struct Element*)malloc(sizeof(struct ELement));
    if(p == NULL){
        printf("Memory allocation error\n");
        exit(EXIT_FAILURE);
    }
    p->val = n;
    p->prev = p->next = NULL;
    return p;
}

int getint(){
    char buf[BUFSIZE];

    if(fgets(buf,BUFSIZE,stdin) != NULL){
        return atoi(buf);
    }else{
        return 0;
    }
}

int main(int ac,char* av[]){
    struct Element *tmp1, *tmp2, *h, *t;
    int i;

    tmp1 = getELement(0);
    h=t=tmp1;
    while(1){
        printf("input a number (quit 0): ");
        i = getint();
        if(i == 0){
            break;
        }
        tmp1 = getElement(i);
        t ->next = tmp1;
        tmp1->prev = t;
        t = tmp1;
    }

    for(tmp2 = h->next;tmp2 != NULL;tmp2 = tmp2->next){
        printf("val = %d\n", tmp2->val);
    }
}