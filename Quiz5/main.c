/*

Aþaðýdaki elmas þeklini ekrana yazdýran bir program yazýnýz.
Yalnýzca bir yýldýz(*) yahut yalnýzca bir boþluk ekrana yazdýran printf ifadeleri kullanabilirsiniz.
Ýç içe for ifadeleri kullanýn ve printf ifadelerini asgari (minimum) sayýda kullanmaya çalýþýn.

Örnek çýktý:

     *
    ***
   *****
  *******
 *********
  *******
   *****
    ***
     *


*/

#include <stdio.h>
int main()
{
int i, j, boyut;
int yildiz_sayisi, bosluk_sayisi;
printf("*** Bu program, boyutunu kullanicinin belirledigi bir elmas sekli goruntuler. ***\n\n");
printf("*** Boyut icin ciftsayi girerseniz elmas sekli duzgun gozukmeyecektir. ***\n\n");
printf("*** Bu sebeple lutfen tek sayi kullanin ***\n\n");
printf("Elmasin boyutunu giriniz: \n\n");
scanf("%d", &boyut);
printf("\n\n");
yildiz_sayisi = 1; /* Ýlk satýrda sadece bir yýldýz var*/
bosluk_sayisi = boyut/2; /* Ýlk satýrdaki boþluk sayýsý boyutun yaklaþýk yarýsýna karþýlýk geliyor. */
/* Her satýr için tekrarlanmayý alttaki for döngüsüyle (dýþ döngü) saðlýyoruz */
for(i=1; i<=boyut; i++)
{
/* Boþluklarý görüntülemek */
for(j=1; j<=bosluk_sayisi; j++)
printf(" ");
/* Yýldýzlarý görüntülemek */
for(j=1; j<=yildiz_sayisi; j++)
printf("*");
/* Bir alt satýra geçmek */
printf("\n");
if(i<boyut/2 + 1)
{
bosluk_sayisi--; /*Elmasýn üst kýsmýndayken,her alt satýra geçiþinizde boþluk sayýsý 1 azalýrken yýldýzsayýsý 2 artar.*/
yildiz_sayisi+=2;
}
else
{
bosluk_sayisi++;/*Elmasýn alt kýsmýndayken,her alt satýra geçiþinizde boþluk sayýsý 1 artarken yýldýzsayýsý 2 azalýr.*/
yildiz_sayisi-=2;
}
}
return 0;
}
