/*
Bir tam say� al�p asal �arpanlar�n� bir dizide saklayan bir program yaz�n�z.
�rne�in, 120�nin asal �arpanlar� 2,2,2,3, ve 5�tir.
*/

#include <stdio.h>
int main()
{
int sayi,indis=0, sayac=0;
int dizi[20];
printf("Bir Sayi Girin: \n");
scanf("%d",&sayi);
if(sayi<2) {
printf("Lutfen 1'den Buyuk Bir Sayi Girin \n");
}
else{
printf("%d'in Asal Carpanlari : \n",sayi);
for(int i=2; sayi!=1;i++){
if(sayi%i==0){
dizi[indis] = i;
indis = indis + 1;
sayac = sayac + 1;
sayi = sayi/i;
i = i - 1;
}
}
}
for(int j=0; j<sayac; j++) {
    printf("%d ",dizi[j]);
}
return 0;
}
