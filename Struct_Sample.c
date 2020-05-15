#include<stdio.h>
#include<string.h>
struct adres{
	char mah[30];
	char cadde[30];
	char sok[30];
	int no;
};

struct student {
	char isim[10];
	char soyisim[15];
	int no,yas,sinif;
	struct adres adres1;
}student1;
int main(){
	struct student stu;
	strcpy(stu.isim,"can");
	strcpy(stu.soyisim,"kahraman");
	stu.no=200008645;
	stu.yas=22;
	stu.sinif=2;
	strcpy (stu.adres1.mah,"girne");
	strcpy (stu.adres1.cadde,"girne");
	strcpy (stu.adres1.sok,"yok");
	stu.adres1.no=85;
	printf("%s %s %d %d %d %s %s %s %d",stu.isim,stu.soyisim,stu.no,stu.yas,stu.sinif,stu.adres1.mah,stu.adres1.cadde,stu.adres1.sok,stu.adres1.no);
	return 0;
}
