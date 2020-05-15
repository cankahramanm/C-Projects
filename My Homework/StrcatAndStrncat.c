#include <stdio.h>
int can_strcat(char dizi1[],char dizi2[]){
	int i;
	int t;
	char dizi3[50];
	for(i=0;dizi1[i]!='\0';i++){

	dizi3[i]=dizi1[i];
	}
	for(t=0;dizi2[t]!='\0';t++){

		dizi3[i]=dizi2[t];
		i++;
	}
	printf("%s\n",dizi3);

	return 0;
		/*
Mehmet Can KAHRAMAN
200008645
EEE-2
*/

}
int can_strncat(char dizi3[],char dizi4[],int n){
	int a;
	int b;
	char dizi5[50];
	for(a=0;dizi3[a]!='\0';a++){

	dizi5[a]=dizi3[a];
	}

	for(b=0;b<n;b++){

		dizi5[a]=dizi4[b];
		a++;

	}
	printf("%s\n",dizi5);

	return 0;
}
int main(){
	int n=2;
	char dizia[]="can "; // bo� bir iki dizi olu�turup kullan�c�dan al�rsak ayn� i�lemi yapabiliriz fonksiyonlar ona g�rede tasarland�.
	char dizib[]="kahraman";
	can_strncat(dizia,dizib,n);
	can_strcat(dizia,dizib);

	return 0;
}
