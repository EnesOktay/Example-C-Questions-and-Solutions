/*

Pointer’ları kullanarak iki sayıyı toplayan bir program yazınız.

*/
#include <stdio.h>
int main()
{
int ilk_sayi, ikinci_sayi, *ptr, *qtr, toplam;
printf("Ilk Sayiyi Girin \t: ");
scanf("%d", &ilk_sayi);
printf("Ikinci Sayiyi Girin \t: ");
scanf("%d", &ikinci_sayi);
ptr = &ilk_sayi;
qtr = &ikinci_sayi;
toplam = *ptr + *qtr;
printf("Girilen Sayilarin Toplami \t: %d\n\n",toplam);
return 0;
}

