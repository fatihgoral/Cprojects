#include <stdio.h>
#include <stdlib.h>

int main()
{
   /*
    COK ONEMLÝ NOT
    Eger diziyi baslangic degeri olmadan tanimlarsaniz ve boyut belirtmezseniz,
     derleyici bu durumda dizinin boyutunu bilemeyecegi icin bir hata verir.
     char mesaj1[10]; // Bu doðru, dizinin boyutu belirlenmiþ
char mesaj2[];   // Bu yanlýþ, boyut belirlenmemiþ
Baslangic degerlerini sagladiginizda, dizinin boyutu derleyici tarafindan otomatik olarak belirlenir.
örnegin :
     char mesaj1[]="merhaba ";
   */

/*
    char mesaj1[]="merhaba "; // 'mesaj1' dizisinin boyutu otomatik olarak 9 karakter (8 karakter + 1 null terminator) olarak belirlenir
    char mesaj2[]="dunya "; // mesaj2' dizisinin boyutu otomatik olarak 6 karakter (5 karakter + 1 null terminator) olarak belirlenir.
    printf("%s\n\n\n",strcat(mesaj1,mesaj2));

    char message[]="merhaba ";
    char name[10];
    printf("lutfen isminizi giriniz:");
    scanf("%s",&name);
    printf("%s\n",strcat(message,name));
*/

   char isim[10],isimKopya[10],mesaj[]="merhaba ";
   printf("lutfen isminizi giriniz:");
   scanf("%s",&isim);
   strcpy(isimKopya,isim);
  int uzunluk = strlen(isimKopya);
  printf("%s metninin uzunlugu %d dir",strcat(mesaj,isimKopya),uzunluk);
    return 0;
}
