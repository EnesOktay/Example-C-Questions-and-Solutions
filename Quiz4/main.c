/*

Kullan�c� 0 girene kadar say� almaya devam eden bir program yaz�n�z.
Daha sonra bu say�lar�n miktar�n� ve aritmetik ortalamas�n� ekrana yazd�r�n�z.

*/

#include<stdio.h>
int main(){
int x = 1;
float toplam = 0;
int sayi_adedi = -1;
printf("Lutfen ortalamasi hesaplanacak sayilari giriniz, 0 girdi�inizde islem sonlanir...\n");
while(x!=0){
scanf("%d",&x);
sayi_adedi++;
toplam+=x;
}
float ortalama = toplam/sayi_adedi;
printf("Sayi Adedi: %d\nOrtalama : %.2f",sayi_adedi,ortalama);
return 0;
}

