#include <stdio.h>
#include <stdlib.h>

// Fonksiyon bildirimi
void isimYazdir(char **isim);
void isimBuyukHarf(char **isim);
void harfSayisiVeBuyukKucukHarf(char **isim);

int main()
{
    char metin[5][20] = {"okan", "fatma", "Ayse", "Fatih", "Huseyin"};
    char *isim[5];  // Dizi iþaretçileri array'i

    // metin dizisini isim dizisine aktar
    for (int i = 0; i < 5; i++) {
        isim[i] = metin[i];  // her isim iþaretçisine metin[i]'yi atýyoruz
    }

    isimYazdir(isim);  // Fonksiyonu çaðýrýyoruz
    printf("\nIsimlerin Buyuk Harfli Hali:\n");
    isimBuyukHarf(isim);  // Buyuk harfe çeviren fonksiyonu çaðýrýyoruz
    harfSayisiVeBuyukKucukHarf(isim);  // Kullanýcýdan harf alýp, sayýsýný ve büyük-küçük harf sayýsýný yazdýran fonksiyon

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

// Ýsimleri büyük harfe çeviren fonksiyon
void isimBuyukHarf(char **isim) {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; (*(isim + i))[j] != '\0'; j++) {
            // Küçük harf ise büyük harfe çevir
            if ((*(isim + i))[j] >= 'a' && (*(isim + i))[j] <= 'z') {
                printf("%c", (*(isim + i))[j] - 32);
            } else {
                printf("%c", (*(isim + i))[j]);
            }
        }
        printf("\n");  // Satýr sonu ekliyoruz
    }
}
