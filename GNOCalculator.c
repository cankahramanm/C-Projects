#include<stdio.h>
int main ()
{
	int k;
	int ders;

	printf("Ders Sayisini giriniz:");
	scanf("%d", &ders);

	float ort[ders];
	int akts[ders];
	float ortalama;
	int toplam;
	float total;
	for(k=0;k<ders;k++){

		printf("\n%d. dersin Akts sini giriniz:",k+1);
		scanf("%d", &akts[k]);
		printf("\n%d. ders ortalamanizi giriniz:",k+1);
		scanf("%f", &ort[k]);

	}




	for(int b=0;b<ders;b++){
		toplam+=akts[b];

		(total+=akts[b]*ort[b]);
		ortalama= total/toplam;

	}
	printf("Toplam AKTS=%d\n",toplam);
	printf("Agirlik Not=%.2f\n",total);
	printf("GNO=%.2f\n",ortalama);
	return 0;

}
