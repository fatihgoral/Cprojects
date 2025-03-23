#include <stdio.h>
#include <stdlib.h>
// Amstrong sayilar
// girilen 3 basamakli sayinin Amstrong sayi olup olmadigini bulunuz

int main()
{
   int sayi,basamak,toplam=0;
   printf("lutfen 3 basamakli bir sayi giriniz");
   scanf("%d",&sayi);
   orjinalNumber=sayi;

   while(sayi!=0){
      basamak=sayi%10;
        toplam=toplam+(basamak*basamak*basamak);
        sayi/=10;
   }
    return 0;
}
