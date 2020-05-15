#include<stdio.h>
int can_strncpy(char dizi1[],char dizi2[]){

	int i;
	for(i=0;i<10;i++){
		dizi1[i]=dizi2[i];


	}

	printf("Kopyalanacak Harf sayisi=%d\nKaynak=%s\nKopya=%s\n",10,dizi2,dizi1);
	return 0;

}
int can_strcpy(char dizi1[],char dizi2[]){
	int i=0;

	while(dizi2[i]!='\0'){
		dizi1[i]=dizi2[i];
		i++;

	}
	printf("Kaynak = %s\nKopya= %s\n",dizi2,dizi1);
	return 0;
}
	/*
Mehmet Can KAHRAMAN
200008645
EEE-2
*/


int main(){

	char kaynak[]={"can strcpy ve strncpy odevi"};
	char kopya[30];
	char kopya1[10];
	can_strcpy(kopya,kaynak);
	can_strncpy(kopya1,kaynak);

	return 0;
}
