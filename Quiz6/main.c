/*
Di�er iki kenar verildi�inde bir dik ��genin hipoten�s�n�n uzunlu�unu hesaplayan hipotenus isimli bir fonksiyon tan�mlay�n.
Fonksiyon double t�r�nde iki arg�man almal� ve hipoten�s� double olarak d�nd�rmelidir.
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
