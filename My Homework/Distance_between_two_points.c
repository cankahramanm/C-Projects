#include<stdio.h>
#include<math.h>

typedef struct uzaklik{
	double x;
	double y;
}noktalar;

double uzaklikolcme(noktalar n1, noktalar n2){


  double sonucx = pow((n1.x - n2.x), 2);
  double sonucy = pow((n1.y - n2.y), 2);
  double sonuc  = sqrt(sonucx + sonucy);

return sonuc;
}
int esitmi(noktalar n1,noktalar n2)
{
    if (n1.x == n2.x && n1.y == n2.y){
      return 1;

    }
    else{
      return 0;
    }
}
int main(){

noktalar noktaA;
noktaA.x = 0.00;
noktaA.y = 5.00;

noktalar noktaB;
noktaB.x = 12.00;
noktaB.y = 0.00;

printf("Aralarindaki mesafe %.1f\n", uzaklikolcme(noktaA, noktaB));



noktalar noktaa = {6,7};
noktalar noktab = {6,7};
noktalar noktac = {6,7.00001};
printf("%d\n", esitmi(noktaa,noktab));
printf("%d\n", esitmi(noktaa,noktac));
return 0;
}
