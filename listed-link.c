#include <stdio.h>
#include <stdlib.h>

/*
Mehmet Can KAHRAMAN
200008645
https://github.com/cankahramanm/C-Projects
*/

 struct can
{
	int address;
	struct can* next;
};

int plist(struct can* c)
{
	printf("Head==>");
	while(c != NULL)
	{
		printf("%d==>", c->address);
		c = c->next;
  }

	printf("NULL\n\n");
  return 0;
}
int addlist(struct can*c){
  struct can* head = NULL;
  printf("No Adding\n");
  plist(head);
  c = malloc(sizeof(struct can));
  c->address = 100;
  c->next = head;
  head = c;

  printf("First Adding\n");
  plist(head);
  c = malloc(sizeof(struct can));
	c->address = 200;
	c->next = head;
	head = c;
	printf("Second Adding\n");
	plist(head);
  c = malloc(sizeof(struct can));
  int num1,num2;
  printf("Enter the number you want to add\n");
  scanf("%d",&num1);
  c->address = num1;
  c->next = head;
  head = c;
  printf("Third Adding\n");
  plist(head);
  c = malloc(sizeof(struct can));



  printf("Fourth Adding\n");
  plist(head);
  return 0;
}
int deletelist(struct can*c){
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
