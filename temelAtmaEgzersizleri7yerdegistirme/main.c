#include <stdio.h>
#include <stdlib.h>
// A ve b degiskenlerine iki tamsayi girdi olarak alan ve
// yerini degistiren bir c programini yaziniz
int main()
{
  int s1,s2,gecici;

   printf("ilk sayiyi giriniz : ");
   scanf("%d",&s1);

   printf("ikinci sayiyi giriniz : ");
   scanf("%d",&s2);

   printf("yer degistirmeden once: %5d %5d\n",s1,s2);

   gecici=s1;
   s1=s2;
   s2=gecici;

 printf("yer degistirdikten sonra : %5d %5d",s1,s2);



    return 0;
}
