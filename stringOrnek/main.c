#include <stdio.h>
#include <stdlib.h>

int main()
{
   char dizi[100];
    printf("lutfen iki kelimelik bir string ifadeyi giriniz: ");
   fgets(dizi,sizeof(dizi),stdin);

   printf("girilen string ifadenin uzunlugu : %d ", strlen(dizi)-1);
/*newline karakteri, bir satirin sonunu ve yeni bir satirin baslangicini belirten ozel bir karakterdir. C dilinde bu karakter genellikle \n ile gosterilir.
Klavyede "Enter" tusuna basildiginda, newline karakteri devreye girer. Bu yuzden, strlen(kelime) dedigimizde \n karakterini de saydigi icin,
kelimenin gercek uzunlugunu bulmak icin -1 cikartiyoruz. Eger bu karakteri hesaba katmazsak, kullanicinin girdigi string'in uzunlugu oldugundan
bir fazla gorunur. */

    return 0;
}
