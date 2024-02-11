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

int search(struct LIST *l, char* s){
    struct Element* e;
    for(e=l->h->next; e != NULL; e =e->next){
        if(strcmp(e->val,s) == 0){
            return 1;
        }
    }
    return 0;
}

char* getstring(){
    char buf[BUFSIZE];
    char* p;
    
    if(fgets(buf,BUFSIZE,stdin) == "\x1a"){
        exit(EXIT_SUCCESS);
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
    struct LIST *l1;
    char* s1;
    char* s2;

    l1 = intitList();
    while(1){
        printf("input a string (quit whem Ctrl + D): ");
        s1 = getstring();

        if (s1 == NULL){
            break;
        }
        appendElement(l1, s1);
    }

    printf("l1\n");
    printALLElements(l1);

    printf("input a search string (quit whem Ctrl + D): ");
    s2 = getstring();
    if(search(l1,s2) == 1){
        printf("found\n");
    }else{
        printf("not found\n");
    }
}    

