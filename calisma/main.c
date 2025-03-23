#include <stdio.h>
#include <stdlib.h>

// Fonksiyon bildirimi
void isimYazdir(char **isim);
void harfSayisiVeCevir(char harfler[], int n, char metin[5][20]);

int main()
{
    char metin[5][20] = {"okan", "fatma", "Ayse", "Fatih", "Huseyin"};
    char *isim[5];  // Dizi iþaretçileri array'i

    // metin dizisini isim dizisine aktar
    for (int i = 0; i < 5; i++) {
        isim[i] = metin[i];  // her isim iþaretçisine metin[i]'yi atýyoruz
    }

    isimYazdir(isim);  // Ýsimleri yazdýrýyoruz

    // Kullanýcýdan kaç harf gireceði soruluyor
    int n;
    printf("\nKaç harf gireceksiniz? ");
    scanf("%d", &n);

    // Kullanýcýdan harfler alýnýyor
    char harfler[n];
    printf("\n%d harfi girin: \n", n);
    for (int i = 0; i < n; i++) {
        printf("%d. Harfi girin: ", i+1);
        scanf(" %c", &harfler[i]);  // Her harf için iþlem yapýlacak
    }

    // Harf sayýsýný ve dönüþümünü yapan fonksiyonu çaðýrýyoruz
    harfSayisiVeCevir(harfler, n, metin);

    return 0;
}

// Ýsimleri yazdýran fonksiyon
void isimYazdir(char **isim) {
    printf("\n5 Kelime:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; (*(isim + i))[j] != '\0'; j++) {
            printf("%c", (*(isim + i))[j]);  // Karakter karakter yazdýrýyoruz
        }
        printf("\n");  // Satýr sonu ekliyoruz
    }
}

// Harf sayýsýný ve küçük harfleri büyük harfe çevirme iþlemi yapan fonksiyon
void harfSayisiVeCevir(char harfler[], int n, char metin[5][20]) {
    int toplamHarfiSayisi[n];  // Her harf için toplam sayýlar
    int harfSayisi[n];         // Her harfin büyük harfe çevrilmiþ halindeki sayýsý

    // Harf sayýsýný sýfýrlýyoruz
    for (int i = 0; i < n; i++) {
        toplamHarfiSayisi[i] = 0;
        harfSayisi[i] = 0;
    }

    // Harf sayýsýný ve dönüþümünü yapýyoruz
    for (int i = 0; i < 5; i++) {
        for (int j = 0; metin[i][j] != '\0'; j++) {
            for (int k = 0; k < n; k++) {
                // Girilen harflerin büyük veya küçük olmasýný kontrol ederek sayýyoruz
                if (metin[i][j] == harfler[k] || metin[i][j] == harfler[k] + 32) {
                    toplamHarfiSayisi[k]++;
                }
            }
        }
    }

    // 5 kelimenin tümünü büyük harfe çeviriyoruz
    printf("\nBüyük harfe çevrilmiþ kelimeler:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; metin[i][j] != '\0'; j++) {
            // Harfi büyük harfe çeviriyoruz
            if (metin[i][j] >= 'a' && metin[i][j] <= 'z') {
                metin[i][j] = metin[i][j] - 32;  // küçük harfi büyük harfe çevir
            }

            // Büyük harfe çevrilmiþ kelimeleri yazdýrýyoruz
            printf("%c", metin[i][j]);
        }
        printf("\n");
    }

    // Girilen harflerin büyük harfli kelimelerdeki sayýsýný buluyoruz
    for (int k = 0; k < n; k++) {
        for (int i = 0; i < 5; i++) {
            for (int j = 0; metin[i][j] != '\0'; j++) {
                if (metin[i][j] == harfler[k] - 32) {  // Büyük harf
                    harfSayisi[k]++;
                }
            }
        }
    }

    // Sonuçlarý yazdýrýyoruz
    for (int k = 0; k < n; k++) {
        printf("\n'%c' harfi toplam %d kelimede bulundu.\n", harfler[k], toplamHarfiSayisi[k]);
        printf("Büyük harfe çevrilmiþ kelimelerde toplam '%c' harfi sayisi: %d\n", harfler[k] - 32, harfSayisi[k]);
    }
}
