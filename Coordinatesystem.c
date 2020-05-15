#include<stdio.h>
int main (){
	float x,y;
	printf("Bolgenin x koordinatlarini giriniz.=");
	scanf("%f",&x);
	printf("Bolgenin y koordinatlarini giriniz.=");
	scanf("%f",&y);


	if(x==0 && y!=0 ){
		printf("%.1f y dogrusunun uzerinde bir noktadir.",y);
}
	else if(y==0 && x!=0 ){
		printf("%.1f x dogrusunun uzerinde bir noktadir.",x);}

	else if(x==0 && y==0){
		printf("Bu nokta origin noktasidir.");
}
	else if(0<x && 0<y){
		printf("Bu nokta 1. bolgededir.");
}
	else if(x<0 && 0<y){
		printf("Bu nokta 2. bolgededir.");
}
	else if(x<0 && y<0){
		printf("Bu nokta 3.bolgededir.");
}
	else if(0<x && y<0){
		printf("Bu nokta 4.bolgededir.");
}
	else if(x==0 && y!=0 ){
		printf("%.1f y dogrusunun uzerinde bir noktadir.",y);
}
	else if(y==0 && x!=0 ){
		printf("%.1f x dogrusunun uzerinde bir noktadir.",x);}

	else{

		printf("Hatal� giris yapt�n�z.");
	}
	return 0;
}
