#include <stdio.h>
#include <stdlib.h>

// Fonksiyon bildirimi
void isimYazdir(char **isim);

int main()
{
    char metin[5][20] = {"okan", "fatma", "Ayse", "Fatih", "Huseyin"};
    char *isim[5];  // Dizi i�aret�ileri array'i

    // metin dizisini isim dizisine aktar
    for (int i = 0; i < 5; i++) {
        isim[i] = metin[i];  // her isim i�aret�isine metin[i]'yi at�yoruz
    }

    isimYazdir(isim);  // Fonksiyonu �a��r�yoruz

    return 0;
}

// �simleri yazd�ran fonksiyon
void isimYazdir(char **isim) {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; (*(isim + i))[j] != '\0'; j++) {
            printf("%c", (*(isim + i))[j]);  // Karakter karakter yazd�r�yoruz
        }
        printf("\n");  // Sat�r sonu ekliyoruz
    }
}
