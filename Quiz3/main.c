/*

Kullanýcýdan yaþýný girmesini isteyin.
Eðer yaþý,
18 ise þunu yazdýrýn »genc»
30 ise »genc yetiskin»
60 ise »yetiskin»
100 ise »yasli»
Diðer durumlar için,
Þunu yazdýrýn  «Sadece dort yas biliyorum.»

switch-case kullanýnýz.

*/

#include <stdio.h>
int main()
{
int yas;
printf("Yasinizi giriniz \n");
scanf("%d",&yas);
switch(yas)
{
case 18:
printf("Genc \n");
break;
case 30:
printf("Genc yetiskin \n");
break;
case 60:
printf("Yetiskin \n");
break;
case 100:
printf("Yasli \n");
break;
default:
printf("Sadece dort yas biliyorum \n");
}
return 0;
}




