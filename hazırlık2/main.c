#include <stdio.h>
#include <stdlib.h>

// Fonksiyon bildirimi
void isimYazdir(char **isim);

int main()
{
    char metin[5][20] = {"okan", "fatma", "Ayse", "Fatih", "Huseyin"};
    char *isim[5];  // Dizi iþaretçileri array'i

    // metin dizisini isim dizisine aktar
    for (int i = 0; i < 5; i++) {
        isim[i] = metin[i];  // her isim iþaretçisine metin[i]'yi atýyoruz
    }

    isimYazdir(isim);  // Fonksiyonu çaðýrýyoruz

    return 0;
}

// Ýsimleri yazdýran fonksiyon
void isimYazdir(char **isim) {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; (*(isim + i))[j] != '\0'; j++) {
            printf("%c", (*(isim + i))[j]);  // Karakter karakter yazdýrýyoruz
        }
        printf("\n");  // Satýr sonu ekliyoruz
    }
}
