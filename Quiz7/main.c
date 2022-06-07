/*

x üzeri y‘yi hesaplayan int power(int x, int y) rekürsif (recursive) fonksiyonunu yazýnýz.

*/

#include <stdio.h>
int power(int x,int y);
int main()
{
int x,y;
printf("x ve y girin: \n");
scanf("%d%d",&x,&y);
if(y<0){
printf("Lutfen kuvveti negatif olmayacak sekilde seciniz");
}
else{
printf("%d ^ %d = %d",x,y,power(x,y));
}
return 0;
}
int power(int x, int y){
if(y>0){
return x*power(x,y-1);
}
else if(y==0){
return 1;
}
}
