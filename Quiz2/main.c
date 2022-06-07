/*

Kullanýcýdan bir sayý alýn
2,3,5 ve 7 sayýlarýna tam bölünüp bölünmediði bilgisini ekrana yazdýrýn.

*/

#include <stdio.h>
int main()
{
int x;
printf("Bir sayi giriniz\n");
scanf("%d",&x);
if(x%2==0)
printf("2 ile tam bolunur \n");
else
printf("2 ile tam bolunmez \n");
if(x%3==0)
printf("3 ile tam bolunur \n");
else
printf("3 ile tam bolunmez \n");
if(x%5==0)
printf("5 ile tam bolunur \n");
else
printf("5 ile tam bolunmez \n");
if(x%7==0)
printf("7 ile tam bolunur \n");
else
printf("7 ile tam bolunmez \n");
return 0;
}
