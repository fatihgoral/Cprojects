#include <stdio.h>
#include <stdlib.h>

typedef struct adresDefteri{
char ad[100];
char soyad[100];
int tel[20];
char adres[200];
int postakodu[10];
}defter;

int main()
{
   /* Adres defteri adýnda bir yapi tanimlayiniz.tutulacak bilgiler ad,soyad,tel,adres,posta kodu þeklindedir
    buna göre N adet kiþinin bilgisini bir yapida tutan C programýný yaziniz
    */
     int i;
   int M;
   defter iletisimBilgileri[i];


   for(i=0;i<M;i++){
    printf("adi giriniz");
    gets(iletisimBilgileri[i].ad);

     printf("soyadi giriniz");
     gets(iletisimBilgileri[i].soyad);

      printf("telefon no giriniz");
      gets(iletisimBilgileri[i].tel);

       printf("adres giriniz");
      gets(iletisimBilgileri[i].adres);

        printf("posta kodu giriniz");
        gets(iletisimBilgileri[i].postakodu);
   }
printf("adi\tsoyadi")


    return 0;
}
