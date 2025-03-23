#include <stdio.h>
#include <stdlib.h>
// ad soyad degerlerini ayri ayri string degiskenlerde tutunuz
// birlestirme islemi yapip ekrana basiniz
// hem scanf ile hem fgets ile ayni ornegi cozunuz
int main()
{

 char ad[25];
 char soyad[25];

 printf("adinizi giriniz: ");
scanf("%s",&ad);// tek kelime almasaydim fgets kullanirdim

printf("soy adinizi giriniz: ");
scanf("%s",&soyad);

strcat(ad," ");
strcat(ad,soyad);
printf("ad soyad: %s",ad);
    return 0;
}
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char ad[25];
    char soyad[25];

    // Adý al
    printf("Adinizi giriniz: ");
    fgets(ad, sizeof(ad), stdin);
    // fgets, newline karakteri ekleyebilir; onu temizleyelim
    ad[strcspn(ad, "\n")] = '\0';

    // Soyadý al
    printf("Soyadinizi giriniz: ");
    fgets(soyad, sizeof(soyad), stdin);
    // fgets, newline karakteri ekleyebilir; onu temizleyelim
    soyad[strcspn(soyad, "\n")] = '\0';

    // Ad ve soyadý birleþtir
    strcat(ad, " ");
    strcat(ad, soyad);

    // Sonucu ekrana bas
    printf("Ad Soyad: %s\n", ad);

    return 0;
}
*/
