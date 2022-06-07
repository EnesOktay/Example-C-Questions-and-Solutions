/*

Kullanýcý 0 girene kadar sayý almaya devam eden bir program yazýnýz.
Daha sonra bu sayýlarýn miktarýný ve aritmetik ortalamasýný ekrana yazdýrýnýz.

*/

#include<stdio.h>
int main(){
int x = 1;
float toplam = 0;
int sayi_adedi = -1;
printf("Lutfen ortalamasi hesaplanacak sayilari giriniz, 0 girdiðinizde islem sonlanir...\n");
while(x!=0){
scanf("%d",&x);
sayi_adedi++;
toplam+=x;
}
float ortalama = toplam/sayi_adedi;
printf("Sayi Adedi: %d\nOrtalama : %.2f",sayi_adedi,ortalama);
return 0;
}

