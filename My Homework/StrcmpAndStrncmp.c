#include<stdio.h>

int can_strcmp(char dizi1[],char dizi2[]){
	int i;
	int t=sizeof(dizi1)/sizeof(char)-1;
	int a=0;
	for(i=0;dizi1[i]!='\0';i++){
		if(dizi1[i]==dizi2[i]){
		a++;

		}
		else{
			printf("Diziler esit degildir.\n");
		break;
		}
		if(t==a)
		printf("Esitler.\n");

		}



	return 0;
}
int can_strncmp(char dizi1[],char dizi2[],int n){
		int i;
	int a=0;
	for(i=0;i<n;i++){
		if(dizi1[i]==dizi2[i]){
		a++;

		}
		else{
			printf("Diziler esit degildir.\n");
		break;
		}
		if(n==a)
		printf("esitler\n");

		}
			/*
Mehmet Can KAHRAMAN
200008645
EEE-2
*/


	return 0;
}
int main(){

	char dizi1[]="ticaret";
	char dizi2[]="timsah";

	can_strcmp(dizi1,dizi2);
	can_strncmp(dizi1,dizi2,3);

	return 0;
}
