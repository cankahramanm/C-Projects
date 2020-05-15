#include<stdio.h>

int can_strlen_for(char dizi[]){
	int i=0;
	int temp=0;
	for (;dizi[i]!='\0';i++)
	temp++;

	return temp;
}

int can_strlen_while(char dizi[])
{
	int i=0;


	while(dizi[i]!='\0'){
		i++;
	}
return i;

}


int main()
{
	 char strlen[20]="cankahraman";

	printf("%s\n",strlen);
	printf("%d",can_strlen_while(strlen)); // ben burada can_strlen_while fonksiyonuna g�nderdim ama istersek can_strlen_for fonksiyonuna da g�nderebilirim. �kiside ayn� sonu�u verir.
	/*
Mehmet Can KAHRAMAN
200008645
EEE-2
*/


	return 0;
}
