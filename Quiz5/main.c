/*

A�a��daki elmas �eklini ekrana yazd�ran bir program yaz�n�z.
Yaln�zca bir y�ld�z(*) yahut yaln�zca bir bo�luk ekrana yazd�ran printf ifadeleri kullanabilirsiniz.
�� i�e for ifadeleri kullan�n ve printf ifadelerini asgari (minimum) say�da kullanmaya �al���n.

�rnek ��kt�:

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
yildiz_sayisi = 1; /* �lk sat�rda sadece bir y�ld�z var*/
bosluk_sayisi = boyut/2; /* �lk sat�rdaki bo�luk say�s� boyutun yakla��k yar�s�na kar��l�k geliyor. */
/* Her sat�r i�in tekrarlanmay� alttaki for d�ng�s�yle (d�� d�ng�) sa�l�yoruz */
for(i=1; i<=boyut; i++)
{
/* Bo�luklar� g�r�nt�lemek */
for(j=1; j<=bosluk_sayisi; j++)
printf(" ");
/* Y�ld�zlar� g�r�nt�lemek */
for(j=1; j<=yildiz_sayisi; j++)
printf("*");
/* Bir alt sat�ra ge�mek */
printf("\n");
if(i<boyut/2 + 1)
{
bosluk_sayisi--; /*Elmas�n �st k�sm�ndayken,her alt sat�ra ge�i�inizde bo�luk say�s� 1 azal�rken y�ld�zsay�s� 2 artar.*/
yildiz_sayisi+=2;
}
else
{
bosluk_sayisi++;/*Elmas�n alt k�sm�ndayken,her alt sat�ra ge�i�inizde bo�luk say�s� 1 artarken y�ld�zsay�s� 2 azal�r.*/
yildiz_sayisi-=2;
}
}
return 0;
}
