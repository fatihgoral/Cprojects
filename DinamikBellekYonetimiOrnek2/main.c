#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Alt dizeyi kopyalayacak fonksiyon
char *SubString(char *dizi, int pozisyon, int uzunluk) {

    char *dizikopya = (char*)malloc((uzunluk + 1) * sizeof(char));

    if (dizikopya == NULL) {
        printf("Bellek tahsisi ba�ar�s�z.\n");
        exit(1);
    }


    strncpy(dizikopya, dizi + pozisyon, uzunluk);
    dizikopya[uzunluk] = '\0';

    return dizikopya;
}

int main() {
    char dizi[100];
    int pozisyon, uzunluk;


    printf("Bir karakter dizisi girin: ");
    gets(dizi);


    printf("Kopyalamaya ba�lanacak pozisyonu girin: ");
    scanf("%d", &pozisyon);


    printf("Kopyalanacak karakter say�s�n� girin: ");
    scanf("%d", &uzunluk);


    char *kopya = SubString(dizi, pozisyon, uzunluk);
    printf("Kopyalanan dize: %s\n", kopya);


    free(kopya);

    return 0;
}
