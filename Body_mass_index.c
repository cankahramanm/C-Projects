#include<stdio.h>
	int main()
	{

			float boy,m,total;


			printf("Boyunuz m cinsinde giriniz=");
			scanf("%f",&boy);

			printf("\nAgirliginizi kg giriniz=");
			scanf("%f",&m);
			printf("\n");
			total=m/(boy*boy);
				if(total<=18.5)
				{
					printf("Zayif");
				}
				else if(18.5<total && total<24.9)
				{
					printf("Normal kilolu");
				}
				else if(25<total && total<30)
				{
					printf("Fazla kilolu");
				}
				else if(30<total && total<40)
				{
					printf("Obez");
				}
				else if(40<total)
				{
					printf("ileri derece obez");
				}
				else
				{
					printf("Hatali giris yaptiniz.");
				}


		return 0;
	}
