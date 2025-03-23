#include <stdio.h>
#include <stdlib.h>

int main()
{
    char bilgi[40];
    printf("cumle giriniz\n");
   gets(bilgi);
   puts(bilgi);
   printf("\n\n");

   /*Bu fonksiyon, girilen tum karakterleri dizinin icine kopyalar ve sonuna null karakter (\0) ekler.
   gets dizinin boyutunu kontrol etmez, bu yuzden dizinin kapasitesini
   asan veri girisi yapildiginda bellek tasmasina neden olabilir.
   Bu, kodunuzun duzgun calismasýný saglayabilir,
   ancak guvenli degildir. fputs ve fgets kullanmak faydali olabilir"
   */


    return 0;
}
