#include <stdio.h>
#include <stdlib.h>

char *first=NULL;

typedef struct string{
char a;
struct string *next;
}string;




char  *get_string(void){
string *preptr=malloc(sizeof(string));
string *nextptr=NULL;
if (preptr==NULL){return 1;}
preptr->a=getchar();
while (preptr->a != 10){
if (first == NULL ){
//first= preptr;
preptr=first;
nextptr=malloc(sizeof(string));
preptr->next=nextptr;
}
else {
preptr=nextptr;
nextptr==malloc(sizeof(string));
preptr->next=nextptr;
}
nextptr->a=getchar();
}
nextptr->a='\0';//preptr->next=NULL;
return first;
}



int main(){
string *c;
c=get_string();
while (c->a !='\0'){
printf("%c",*c);
c=c->next;
}

return 0;
}
