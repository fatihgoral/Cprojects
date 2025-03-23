#include <stdio.h>
#include <stdlib.h>

int main()
{
   char dizi[5][50];
   char *ilk;
   char *ikinci;
   int i;
   char gecici;

   printf("Lutfen 5 adet kelime giriniz:  \n");

   for(i=0;i<5;i++)
   {
       printf("lutfen %d. kelimeyi giriniz\n",i+1);
       scanf("%s",dizi[i]);
   }

   for(i=0;i<5;i++)
   {
      ilk=ikinci=dizi+i;

          while(*ikinci)
          {
              ikinci++;
          }
          ikinci--;
          while(ilk<ikinci)
          {
              gecici=*ilk;
              *ilk=*ikinci;
              *ikinci=gecici;
              ilk++;
              ikinci--;
 // Bu dongu, bir kelimenin karakterlerini tersine cevirmek icin calisir.
// Baslangicta, ilk isaretcisi kelimenin basini, ikinci isaretcisi ise kelimenin sonunu gosterir.
// Dongu boyunca, bu iki isaretci yerlerini degistirir ve bir sonraki karaktere kaydirilir.
// Bu islem, tum karakterler ters cevrilene kadar devam eder.

          }

   }

   for(i=0;i<5;i++)
   {
       printf("%d. kelimenin ters cevrilmis hali :%s \n",i+1,*(dizi+i));
   }
// Bu kod, ters cevrilmis kelimeleri dizi dizisinde sakladiktan sonra,
// her bir kelimeyi tek tek ekrana yazdirir.
// for dongusu ile dizi dizisindeki her bir kelime (dizi[i])
// ekrana basilir ve her kelimenin altina bir yeni satir (\n) eklenir.

    return 0;
}
