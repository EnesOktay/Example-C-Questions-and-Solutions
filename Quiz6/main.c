/*
Diðer iki kenar verildiðinde bir dik üçgenin hipotenüsünün uzunluðunu hesaplayan hipotenus isimli bir fonksiyon tanýmlayýn.
Fonksiyon double türünde iki argüman almalý ve hipotenüsü double olarak döndürmelidir.
*/

#include <stdio.h>
#include<math.h>

double hipotenus(double a,double b);
int main()
{
double kenar1,kenar2;
printf("Dik ucgeninizin iki kenarini girin: \n");
scanf("%lf%lf",&kenar1,&kenar2);
printf("Hipotenus uzunlugu : %.2lf",hipotenus(kenar1,kenar2));
return 0;
}
double hipotenus(double a, double b){
return sqrt(a*a + b*b);
}
