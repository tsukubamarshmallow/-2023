#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
};

struct LIST{
    struct Element *h;
    struct Element *t;
};

struct Element *getElement(char* s){
    struct Element *P;

    P = (struct Element*)malloc(sizeof(struct Element));

    if(P == NULL){
        printf("Memory allocation error\n");
        exit(EXIT_FAILURE);
    }
    P->val = s;
    P->next = NULL;
    return P;
}

struct LIST *intitList(){
    struct LIST *l;

    l = (struct LIST*)malloc(sizeof(struct LIST));
    if(l == NULL){
        printf("MEmory allocation error\n");
        exit(EXIT_FAILURE);
    }
    l->h = getElement("");
    l->t = l->h;
    return l;
}

void appendElement(struct LIST *l, char* s){
    struct Element *e;
    int i;

    e = getElement(s);
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
    char* p;
    
    if(fgets(buf,BUFSIZE,stdin) == NULL){
        printf("Ctrl+D detected!\n");
        exit(0);
    }

    if(buf[0] == '\n'){
        return NULL;
    }

    chomp(buf);
    p = (char*)malloc(sizeof(char)*(strlen(buf)+1));
    strcpy(p,buf);
    return p;
}    

int main(int ac,char* av[]){
    struct LIST *l1, *l2;
    char* s;

    l1 = intitList();
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

