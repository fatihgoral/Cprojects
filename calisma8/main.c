#include <stdio.h>
#include <stdlib.h>

// Fonksiyon bildirimi
void isimYazdir(char **isim);
void isimBuyukHarf(char **isim);
void harfSayisiVeBuyukKucukHarf(char **isim);

int main()
{
    char metin[5][20] = {"okan", "fatma", "Ayse", "Fatih", "Huseyin"};
    char *isim[5];  // Dizi i�aret�ileri array'i

    // metin dizisini isim dizisine aktar
    for (int i = 0; i < 5; i++) {
        isim[i] = metin[i];  // her isim i�aret�isine metin[i]'yi at�yoruz
    }

    isimYazdir(isim);  // Fonksiyonu �a��r�yoruz
    printf("\nIsimlerin Buyuk Harfli Hali:\n");
    isimBuyukHarf(isim);  // Buyuk harfe �eviren fonksiyonu �a��r�yoruz
    harfSayisiVeBuyukKucukHarf(isim);  // Kullan�c�dan harf al�p, say�s�n� ve b�y�k-k���k harf say�s�n� yazd�ran fonksiyon

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

// �simleri b�y�k harfe �eviren fonksiyon
void isimBuyukHarf(char **isim) {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; (*(isim + i))[j] != '\0'; j++) {
            // K���k harf ise b�y�k harfe �evir
            if ((*(isim + i))[j] >= 'a' && (*(isim + i))[j] <= 'z') {
                printf("%c", (*(isim + i))[j] - 32);
            } else {
                printf("%c", (*(isim + i))[j]);
            }
        }
        printf("\n");  // Sat�r sonu ekliyoruz
    }
}
