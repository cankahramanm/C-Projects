#include<stdio.h>

	int main(){

		int x;
		printf("Kaynama noktasini giriniz.");
		scanf("%d",&x);

			if(x==100 || (x<=(100/100*5)+100 && 100-(100/100*5)<=x))
			{
				printf("Su");
			}
			else if(x==357 || (x<=357+357/100*5 && x>=357-357/100*5)){
				printf("Civa");
			}
			else if(x==1187 || (x<=1187+1187/100*5 && x>=1187-1187/100*5)){
				printf("Bakir");
			}
			else if(x==2163 || (x<=2163+2163/100*5 && x>=2163-2163/100*5)){
				printf("Gumus");
			}
			else if(x==2660 || (x<=2660+2660/100*5 && x>=2660-2660/100*5)){
				printf("Altin");
			}
			else{
				printf("Madde taninmadi.");
			}

		return 0;
	}
