#include <stdio.h>
#include <stdlib.h>
// string bir ifadedek, kullanicinin girmis oldugu karakterin kac kere kullanildigini bulun
// while dongusu ve for ile ayri ayri yapiniz
int main()
{
    char message[300]="yaz�l�m �grenme konusunda �srarliyim basaricagim konusunda en ufak bir suphe yok";
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
    char message[300] = "yaz�l�m �grenme konusunda �srarliyim basaricagim konusunda en ufak bir suphe yok";
    char karakter;
    int sayac;

    printf("L�tfen metinde aramak istedi�iniz harfi girebilir misiniz: ");
    scanf(" %c", &karakter); // Bo�luk karakteri ile �nceki bo�luklar� temizle

    sayac = 0;

    // For d�ng�s� ile mesajdaki her karakteri kontrol et
    for (int i = 0; message[i] != '\0'; i++) {
        if (message[i] == karakter) {
            sayac++;
        }
    }

    printf("Girmi� oldu�unuz '%c' karakteri %d defa kullan�lm��t�r.\n", karakter, sayac);

    return 0;
}
*/















