/*
Kullanıcıdan girdi olarak bir isim alın.

Sonra aşağıdaki çıktıyı görüntüleyin:
*
**
***
****
Hosgeldin «girilen isim»
****
***
**
*

*/


#include <stdio.h>
int main()
{
char name[30]; /* Girilecek isim çok uzun olsa bile kapsayabilmek için stringin uzunluğunu 30 olarak seçtik. */
printf("Can you enter your name? \n"); /* Lütfen scanf’i printf le beraber kullanın, aksi takdirde kullanıcı ne girmesi gerektiğini anlayamaz.*/
scanf("%s",&name);
printf("*\n");
printf("**\n");
printf("***\n");
printf("****\n");
printf("Welcome %s \n",name);
printf("****\n");
printf("***\n");
printf("**\n");
printf("*\n");
return 0;
}
