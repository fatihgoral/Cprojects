#include <stdio.h>
#include <stdlib.h>

/* Klavyeden �a� veya �A� harfi girildi�inde "A harfi
girdiniz" mesaj�n� ekrana yazd�racak bir program
yaz�lacakt�r.
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
