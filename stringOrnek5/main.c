#include <stdio.h>
#include <stdlib.h>
// string bir ifadedek, kullanicinin girmis oldugu karakterin kac kere kullanildigini bulun
// while dongusu ve for ile ayri ayri yapiniz
int main()
{
    char message[300]="yazýlým ögrenme konusunda ýsrarliyim basaricagim konusunda en ufak bir suphe yok";
    char karakter;
    int i,sayac;

printf("lutfen metinde aramak istediginiz harfi giebilir misiniz: ");
scanf(" %c",&karakter);

    sayac=0;
    i=0;
    while(message[i]!='\0'){
     if(message[i]==karakter){
        sayac++;
     }
     i++;
    }
    printf("girmis oldugunuz %c karakteri %d defa kullanabilmistir",karakter,sayac);


    return 0;
}

/*
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char message[300] = "yazýlým ögrenme konusunda ýsrarliyim basaricagim konusunda en ufak bir suphe yok";
    char karakter;
    int sayac;

    printf("Lütfen metinde aramak istediðiniz harfi girebilir misiniz: ");
    scanf(" %c", &karakter); // Boþluk karakteri ile önceki boþluklarý temizle

    sayac = 0;

    // For döngüsü ile mesajdaki her karakteri kontrol et
    for (int i = 0; message[i] != '\0'; i++) {
        if (message[i] == karakter) {
            sayac++;
        }
    }

    printf("Girmiþ olduðunuz '%c' karakteri %d defa kullanýlmýþtýr.\n", karakter, sayac);

    return 0;
}
*/















