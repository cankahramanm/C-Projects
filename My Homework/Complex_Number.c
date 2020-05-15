#include<stdio.h>

struct karmasik{
	int sanal;
	int gercek;
}sayi1,sayi2;
int karmasik(int a,int b,int c,int d){
	int toplamgercek,toplamsanal;
	toplamgercek=sayi1.gercek+sayi2.gercek;
	toplamsanal=sayi1.sanal+sayi2.sanal;
	if(toplamsanal>0){
		printf("Karmasik sayi=%d+%di",toplamgercek,toplamsanal);
	}
	else{
		printf("Karmasik sayi=%d%di",toplamgercek,toplamsanal);
	}

}
int main(){
	sayi1;
	sayi2;

		printf("1.sayinin gercek kismini giriniz=");
	scanf("%d",&sayi1.gercek);
		printf("1.sayinin sanal kismini giriniz=");
	scanf("%d",&sayi1.sanal);
		printf("2.sayinin gercek kismini giriniz=");
	scanf("%d",&sayi2.gercek);
		printf("2.sayinin sanal kismini giriniz=");
	scanf("%d",&sayi2.sanal);

	karmasik(sayi1.gercek,sayi2.gercek,sayi1.sanal,sayi2.sanal);
	return 0;
}
