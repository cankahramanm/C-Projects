#include<stdio.h>
#include<stdlib.h>
int main (){
	int i,v;
	int *p;
	int toplam;
	int carpim=1;
	printf("Enter the total number of numbers you will give.\n");
	printf("Number=");
	scanf("%d",&i);
	p=(int *) malloc(i*sizeof(int));
	for(v=0;v<i;v++){
		printf("Enter the %d. number=",v+1);
		scanf("%d",&p[v]);
	}
	for(v=0;v<i;v++){
		printf("%d.number=%d\n",v+1,p[v]);

	}
	for(v=0;v<i;v++){
	toplam+=p[v];
	carpim*=p[v];

	}
		printf("Sum of all=%d\n",toplam);
		printf("Multiplication of all=%d",carpim);

	return 0;
}
