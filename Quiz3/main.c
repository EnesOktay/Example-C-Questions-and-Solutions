/*

Kullan�c�dan ya��n� girmesini isteyin.
E�er ya��,
18 ise �unu yazd�r�n �genc�
30 ise �genc yetiskin�
60 ise �yetiskin�
100 ise �yasli�
Di�er durumlar i�in,
�unu yazd�r�n  �Sadece dort yas biliyorum.�

switch-case kullan�n�z.

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




