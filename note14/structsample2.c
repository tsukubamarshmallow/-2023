#include <stdio.h>

struct Lesson{
    char* name;
    char* subject;
    char* date;
};

int main(int ac,char *av[]){
    struct Lesson *p;
    struct Lesson p1,p2;

    p1.name ="高2基礎数";
    p1.subject = "数学";
    p1.date = "水金";

    p = &p1;
    printf("%s: %s :%s\n", p->name,p->subject,p->date);



}