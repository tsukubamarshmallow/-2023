#include <stdio.h>
#include <stdlib.h>

#define BUFSIZE 100

char* chomp(char* s){
    int i;
    for(i=0;s[i] != '\0';i++){
        if(s[i] == '\n'){
            s[i] = '\0';
        }
    }
}

struct Element{
    char* val;
    struct Element *next;
}

struct LIST{
    struct Element *h;
    struct Element *t;
}

struct Element *getElement(char* s){
    struct Element *P;

    p = (struct ELement*)malloc(sizeof(struct Element));
    if(p == NULL){
        printf("Memory allocation error\n");
        exit(EXIT_FAILURE);
    }
    p->val = s;
    p->next = NULL;
    return p;
}

struct LIST *intitList(){
    struct LIST *l;

    l = (struct LIST*)malloc(sizeof(struct LIST));
    if(l == NULL){
        printf("MEmory allocation error\n");
        exit(EXIT_FAILURE);
    }
    l->h = getElement(0);
    l->t = l->h;
    return l;
}

void appendElement(struct LIST *l, char* s){
    struct Element *e;
    char* p;
    int l;

    l = strlen(chomp(s));
    p = (char*)malloc(sizeof(char)*(l+1));
    strcpy(p,s);

    e = getElement(p);
    l->t->next = e;
    l->t = e;
}

void printALLElements(struct LIST *l){
    struct Element *e;

    for(e=l->h->next; e != NULL; e =e->next){
        printf("val = %s\n", e->val);
    }
}

char* getstring(){
    char buf[BUFSIZE];
    if(fgets(buf,BUFSIZE,stdin) == EOF){
        exit(EXIT_SUCCESS);
    }

    if(buf[0] == '\n'){
        return NULL;
    }

    return buf;
}    

int main(int ac,char* av[]){
    struct LIST *l1, *l2;
    char* s;

    l1 = initList();
    while(1){
        printf("input a string (quit whem Ctrl + D): ");
        s = getstring();
        if (s == NULL){
            break;
        }
        appendElement(l1, s);
    }

    printf("l1\n");
    printALLElements(l1);
}    

