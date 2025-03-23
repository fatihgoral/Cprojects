#include <stdio.h>
#include <stdlib.h>

/* Klavyeden ‘a’ veya ‘A’ harfi girildiðinde "A harfi
girdiniz" mesajýný ekrana yazdýracak bir program
yazýlacaktýr.
*/


int main()
{
   char harf;
   printf("lutfen bir harf giriniz: ");
   scanf("%c",&harf);
   switch(harf){
   case 'A' :
   case 'a' :
    printf("A-A harfini girdiniz");
    break;

   default:
    printf("bu bir hata mesajidir :yanlis bir harf girdiniz tekrar deneyiniz");


   }

    return 0;
}
