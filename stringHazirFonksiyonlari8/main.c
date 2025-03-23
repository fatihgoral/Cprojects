#include <stdio.h>
#include <stdlib.h>

int main()
{
    // strlwr fonksiyonu
 //büyük harfleri kucuk harfe cevirir
   char karakter[3];
   printf("karakteri giriniz: "); scanf("%s",karakter);
   /*scanf icine & isareti koymana gerek yok cunku direkt olarak string
   ifadesini yazarsan stringin ilk harfinin adresini almýs oluruz
   ama & isaretini koyunca string adresin tamamini yollamis oluruz ki bu gereksizdir
   */


   printf("kucuk harfli : %s",strlwr(karakter));


    return 0;
}
