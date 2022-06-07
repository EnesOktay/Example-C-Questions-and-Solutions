/*
Girdi olarak iki boyutlu bir dizi alan sortIncreasingOrder isimli bir fonksiyon yazýnýz.
Bu fonksiyon bu iki boyutlu dizinin her satýrýný sýralamaktadýr.
Bu fonksiyonu main’in içerisinde test etmeyi unutmayýnýz.

A                 A dizisi sýralandýktan sonra:

8   11  10            8   10   11
3   0    5            0    3    5
15  20   2            2   15   20

*/

#include<stdio.h>
void sortIncreasingOrder(int dizi[100][100],
int satir_sayisi, int sutun_sayisi)
{
/* dizinin satirlari için döngü */
for (int i = 0; i < satir_sayisi; i++)
{
/* dizinin sütunlarý için döngü */
for (int j = 0; j < sutun_sayisi; j++)
{
/* elemanlarý karþýlaþtýrýp yerlerini deðiþtirmek için döngü*/
for (int k = 0; k < sutun_sayisi - j - 1; k++)
{
if (dizi[i][k] > dizi[i][k + 1])
{
/*elemanlarýn yer deðiþtirmesi */
int temp = dizi[i][k + 1];
dizi[i][k+1] = dizi[i][k];
dizi[i][k] = temp;
}
}
}
}
for (int i = 0; i < satir_sayisi; i++)
{
for (int j = 0; j < sutun_sayisi; j++){
printf("%d ",dizi[i][j]);
}
printf("\n");
}
}
int main()
{
int satir_sayisi, sutun_sayisi, dizi[100][100];
printf("Satir Sayisini Giriniz \n");
scanf("%d",&satir_sayisi);
printf("Sutun Sayisini Giriniz \n");
scanf("%d",&sutun_sayisi);
printf("Dizinin Elemanlarini Giriniz : \n");
for(int i=0;i<satir_sayisi;i++){
for(int j=0;j<sutun_sayisi;j++){
printf("dizi[%d][%d] \t:",i,j);
scanf("%d",&dizi[i][j]);
}
}
sortIncreasingOrder(dizi, satir_sayisi, sutun_sayisi);
return 0;
}
