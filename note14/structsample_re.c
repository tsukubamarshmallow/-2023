#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BSIZE 100
#define NOP 100

struct Person {
    char* name;
    int height;
    int weight;
};

char* chomp(char* s){
    int l;

    l = strlen(s);
    if(l>0 && s[l-1] == '\n'){
        s[l-1] = '\0';
    }

    return s;
}

char* getname(){
    char buffer[BSIZE];
    char* tmp;
    printf("input name: ");
    if(fgets(buffer,BSIZE,stdin) == NULL){
        return NULL;
    }
    chomp(buffer);
    tmp = (char*)malloc(strlen(buffer)+1);
    if(tmp == NULL){
        printf("Memory allocation error!");
        exit(EXIT_FAILURE);
    }
    strcpy(tmp, buffer);
    return tmp;
}

int main(int ac,char* av[]){
    struct Person persons[NOP];
    char buffer[BSIZE];
    char* tmp;
    int i=0, j;
    while(i<NOP){
        persons[i].name = getname();

        printf("input height: ");
        if(fgets(buffer,BSIZE,stdin) == NULL){
            break;
        }
        persons[i].height = atoi(buffer);

        printf("input weight: ");
        if(fgets(buffer,BSIZE,stdin) == NULL){
            break;
        }
        persons[i].weight = atoi(buffer);

        i++;
    }
    printf("\n");

    j = 1;
    for(i=0;i<j;i++){
        printf("%s: %dcm:%dkg\n",persons[i].name,persons[i].height,persons[i].weight);
        printf("%p\n",&persons[i]);
    }

}