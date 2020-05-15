#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
int c=0;
struct contacts {
	char name[20];
	char number[20];

} contact[50];
void menu(){
	printf("Please select the action you will take.\n");
	printf("1-Add Contact\n");
	printf("2-List Contacts\n");
	printf("3-Remove Contact\n");
	printf("4-Search Contact\n");
	printf("5-Exit\n");
	printf("Your choice=");
}
void addcontact () {


    FILE *p=fopen("Contacts.txt","a");

    if (p==NULL) {
        printf("Contact not found.\n");
    }

    else {
        char con_name[20],con_number[20];


		printf("Please enter the person's name.\n");
		printf("Name=");
        scanf(" %s",con_name);
        fprintf(p,"%s",con_name);
        fprintf(p,"\t");

        printf("Please enter the person's number.\n");
        printf("Number=");
        scanf(" %s",&con_number);
        fputs(con_number,p);
        fprintf(p,"\t");

        fprintf(p,"\n");

        printf("Contacts have been successfully added.\n\n");
        fclose(p);
    }
}
void listcontact() {
	 FILE *p;
    p = fopen("Contacts.txt","r");
    if(p == NULL)
    {
        return 0;
    }
    char sb[100];
    while (fgets (sb, 100, p) != NULL)
    {
	printf("%s",sb);
    }
	fclose(p);
}
int readcontact(FILE *f){
    if (f == NULL){
        return -1;
    }
    char l[150]; /* temp memory   */

    while(fgets(l, 150, f) != NULL && c < 100){
        char *name = strtok(l, "\t");
        char *number = strtok(NULL, "\t");


        if (number != NULL && name != NULL){
            strncpy(contact[c].number, number, 20);
            strncpy(contact[c].name, name, 20);

            c++;
        }
    }
    return c;
}
int removecontact () {
    char *m[10], *l[10];
    FILE *f, *f1;
    f1=fopen("Backup.txt","w");
    fclose(f1);

    f = fopen("Contacts.txt","r");
    if(f == NULL)
    {
        return 0;
    }

    printf("Please enter the name of the person you want to delete.\nName= ");
    scanf("%s", m);
    char s[100],u[100];
    while (fgets (s, 250, f) != NULL)
    {
		strcpy(u,s);
        strcpy(l,strtok(s,"\t"));
        int o=strcmp(m,l);
        if(o==0)
        {

		}
        else
        {
            f1 = fopen("Backup.txt","a");
            if(f1 == NULL)
            {
                return 0;
            }
            fprintf(f1,"%s",u);
            fclose(f1);
        }

    }

	fclose(f);




	f1 = fopen("Backup.txt","r");
    if(f1 == NULL)
    {

		return 0;
    }
    f = fopen("Contacts.txt","w");
    if(f == NULL)
       {

		   return 0;
       }
    fclose(f);
    f = fopen("Contacts.txt","a");
        if(f == NULL)
        {

			return 0;
        }
    while (fgets (s, 250, f1) != NULL)
    {

        fprintf(f,"%s",s);

    }

	fclose(f1);
	fclose(f);
    return 0;
}
int searchcontact(){
	FILE *p;
    p = fopen("Contacts.txt","r");
printf("Enter the name of the person you are calling.\nName=");
struct  contacts c;
char contact[15];

scanf("%s",&contact);



while(!feof(p)){

fscanf(p,"%s %s",c.name,c.number);



if(strcmp(c.name,contact)==0)

{

printf("Number=%s\n",c.number);


}

}

fclose(p);
}
int main(){

	FILE *file_p=fopen("Contacts.txt","r");
	printf("Welcome to Can's phone.\n");
	int select;
	for(select ;select != 5; ){
	menu();
	scanf("%d",&select);

	switch(select){
		case 1 :
			addcontact(file_p);
		break;
		case 2 :
			listcontact(file_p);
		break;
		case 3 :
			removecontact(file_p);
		break;
		case 4 :
			searchcontact(file_p);
		break;
		case 5 :
		break;
		default :
		printf("You made a wrong dialing, please try again.\n");
		break;
			  	   }
							 }
	return 0;
}
