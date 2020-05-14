#include <stdio.h>
#include <stdlib.h>

/*
Mehmet Can KAHRAMAN
200008645
https://github.com/cankahramanm/C-Projects
*/

 struct can{
	int address;
	struct can* next;
};

int plist(struct can* c){
	printf("Head==>");
	while(c != NULL)
	{
		printf("%d==>", c->address);
		c = c->next;
  }

	printf("NULL\n\n");
  return 0;
}
int searchlist(struct can* c){
int search;
int count=0;
printf("Enter the number you want to search\n");
scanf("%d",&search);
while(c != NULL)
{
  count++;

  if(c->address==search){
    break;
  }
  c = c->next;
}
printf("Position of the number you are searching=%d.\n",count);
  return 0;
}
int addlist(struct can*c){
  struct can* head = NULL;
  int num1,num2;
  printf("No Adding\n");
  plist(head);
  c = malloc(sizeof(struct can));
  c->address = 100;
  c->next = head;
  head = c;
  printf("First Adding\n");
  plist(head);
  c = malloc(sizeof(struct can));
  printf("Enter the number you want to add\n");
  scanf("%d",&num2);
  while(head->next != NULL) {
         head = head->next->next;
     }
     head->next= (struct can*) malloc(sizeof(struct can*));
     head->next->address =num2;
     head->next->next = NULL;

  printf("Second Adding\n");
  plist(head);
  c = malloc(sizeof(struct can));
	c->address = 200;
	c->next = head;
	head = c;
	printf("Third Adding\n");
	plist(head);
  c = malloc(sizeof(struct can));

  printf("Enter the number you want to add\n");
  scanf("%d",&num1);
  c->address = num1;
  c->next = head;
  head = c;
  printf("Fourth Adding\n");
  plist(head);
  searchlist(head);

  return 0;
}
int deletelist(struct can*c){
  printf("Delete List\n");
  struct can* head = NULL;
  if(head != NULL)
  {

     struct can *temp = head;
     head = head->next;
     free(temp);
  }
    plist(head);
  return 0;
}

int main(){

  struct can* head = NULL;
  addlist(head);
  deletelist(head);
  return 0;
}
