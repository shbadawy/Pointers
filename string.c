#include <stdio.h>
#include <stdlib.h>

typedef struct string{
	char a;
	struct string *next;
}string;


string  get_string(void){
	char c;
	string *preptr=malloc(sizeof(string));//previos char
	string *nextptr=NULL;//next char
	string *first=NULL;
	//if (preptr==NULL){return "E";}
	c=getchar();
	while (c != 10){
		if (first == NULL ){
			first= preptr;
			preptr->a=c;
			nextptr=malloc(sizeof(string));
			preptr->next=nextptr;
			c=getchar();
		}//endif
		else {
			
			preptr=nextptr;
			preptr->a=c;
			nextptr=malloc(sizeof(string));
			preptr->next=nextptr;
			c=getchar();
		}//endelse
	}//end while
	nextptr->a='\0';
	nextptr->next=NULL;
	return *first;

}//end get string 

void print_string(string s){

while (s.a !='\0'){
		printf("%c",s.a);
		s=*(s.next);
	}
printf("\n");
}


int main(){
	string s;
	s=get_string();
	print_string(s);
	
}
