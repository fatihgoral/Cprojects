#include <stdio.h>

// Fonksiyon bildirimi
void harfSayisiVeBuyukHarfCevir(char **isim);

int main() {
    char metin[5][20] = {"okan", "fatih", "Ayse", "fatih", "huseyin"};
    char *isim[5];  // Pointer dizisi
    for (int i = 0; i < 5; i++) {
        isim[i] = metin[i];  // Her pointer metin dizisindeki kelimelere iþaret ediyor
    }

    harfSayisiVeBuyukHarfCevir(isim);

    return 0;
}

// Kullanýcýdan harf alýp, kaç tane olduðunu bulup, küçükse büyüðe çeviren fonksiyon
void harfSayisiVeBuyukHarfCevir(char **isim) {
    int harfSayisi;
    printf("Kac harf gireceksiniz? ");
    scanf("%d", &harfSayisi);

    char harfler[harfSayisi];



    // Her girilen harfi kontrol et
    for (int h = 0; h < harfSayisi; h++) {
        char harf = harfler[h];
        char buyukHarf;

        if (harf >= 'a' && harf <= 'z') {
            buyukHarf = harf - 32;  // Küçük harfi büyüðe çevir
        } else {
            buyukHarf = harf;  // Büyük harfi olduðu gibi al
        }

        int kucukHarfSayisi = 0;
        int buyukHarfSayisi = 0;

        // Metinlerde harfi arayýp büyük harfe çevir
        for (int i = 0; i < 5; i++) {
            for (int j = 0; isim[i][j] != '\0'; j++) {
                if (isim[i][j] == harf) {
                    kucukHarfSayisi++;
                    isim[i][j] = buyukHarf;  // Küçük harfi büyüðe çevir
                } else if (isim[i][j] == buyukHarf) {
                    buyukHarfSayisi++;
                }
            }
        }

        printf("Harf '%c': %d kucuk, %d buyuk.\n", buyukHarf, kucukHarfSayisi, buyukHarfSayisi + kucukHarfSayisi);
    }

    // Güncellenmiþ metinleri yazdýr
    printf("\nGuncellenmis Metinler:\n");
    for (int i = 0; i < 5; i++) {
        printf("%s\n", isim[i]);
    }
}
