#include<stdio.h>

struct nokta{
	int x;
	int y;
	int z;
	};
void kaydirma(struct nokta n1){
int kx,ky,kz;
int yx,yy,yz;

	printf("X i otelemek istediginiz birimi giriniz=");
	scanf("%d",&kx);
	printf("Y i otelemek istediginiz birimi giriniz=");
	scanf("%d",&ky);
	printf("Z i otelemek istediginiz birimi giriniz=");
	scanf("%d",&kz);
	yx=n1.x+kx;
	yy=n1.y+ky;
	yz=n1.z+kz;
	printf("Yeni noktamizin \nx degeri=%d\ny degeri=%d\nz degeri=%d",yx,yy,yz);


}
int main(){
struct nokta n1;
n1.x=3;
n1.y=4;
n1.z=5;

kaydirma(n1);

return 0;
}
