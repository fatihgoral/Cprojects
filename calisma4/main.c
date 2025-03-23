#include <stdio.h>
#include <stdlib.h>

// Fonksiyon bildirimi
void isimYazdir(char **isim);
void isimBuyukHarf(char **isim);
void harfSayisiVeBuyukKucukHarf(char **isim);

int main()
{
    char metin[5][20] = {"okan", "fatma", "Ayse", "Fatih", "Huseyin"};
    char *isim[5];  // Dizi işaretçileri array'i

    // metin dizisini isim dizisine aktar
    for (int i = 0; i < 5; i++) {
        isim[i] = metin[i];  // her isim işaretçisine metin[i]'yi atıyoruz
    }

    isimYazdir(isim);  // Fonksiyonu çağırıyoruz
    printf("\nIsimlerin Buyuk Harfli Hali:\n");
    isimBuyukHarf(isim);  // Buyuk harfe çeviren fonksiyonu çağırıyoruz
    harfSayisiVeBuyukKucukHarf(isim);  // Kullanıcıdan harf alıp, sayısını ve büyük-küçük harf sayısını yazdıran fonksiyon

    return 0;
}

// İsimleri yazdıran fonksiyon
void isimYazdir(char **isim) {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; (*(isim + i))[j] != '\0'; j++) {
            printf("%c", (*(isim + i))[j]);  // Karakter karakter yazdırıyoruz
        }
        printf("\n");  // Satır sonu ekliyoruz
    }
}

// İsimleri büyük harfe çeviren fonksiyon
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
        printf("\n");  // Satır sonu ekliyoruz
    }
}

// Kullanıcıdan harf alıp, her bir harf için büyük ve küçük harf sayısını hesaplayan fonksiyon
void harfSayisiVeBuyukKucukHarf(char **isim) {
    int n;
    printf("\nLütfen kaç harf gireceğinizi belirtin: ");
    scanf("%d", &n);

    char harfler[n];
    printf("Lütfen %d harf giriniz:\n", n);

    // Kullanıcıdan harfleri al
    for (int i = 0; i < n; i++) {
        printf("Harf %d: ", i + 1);
        scanf(" %c", &harfler[i]);  // Boşluk karakterini temizlemek için önceden boşluk bıraktık
    }

    // Her harf için büyük ve küçük harf sayısını tutmak için iki dizi
    int buyukHarfSayisi[n];
    int kucukHarfSayisi[n];

    // Başlangıçta her harf için sayıları 0 olarak ayarlıyoruz
    for (int i = 0; i < n; i++) {
        buyukHarfSayisi[i] = 0;
        kucukHarfSayisi[i] = 0;
    }

    // Verilen isimlerde harfleri ara
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 5; j++) {
            for (int k = 0; (*(isim + j))[k] != '\0'; k++) {
                if ((*(isim + j))[k] == harfler[i]) {
                    // Küçük harf kontrolü
                    if (harfler[i] >= 'a' && harfler[i] <= 'z') {
                        kucukHarfSayisi[i]++;
                    }
                    // Büyük harf kontrolü
                    if (harfler[i] >= 'A' && harfler[i] <= 'Z') {
                        buyukHarfSayisi[i]++;
                    }
                }
            }
        }
    }

    // Sonuçları yazdır
    for (int i = 0; i < n; i++) {
        printf("\n'%c' harfi küçük harf olarak %d kez, büyük harf olarak %d kez bulundu.\n", harfler[i], kucukHarfSayisi[i], buyukHarfSayisi[i]);
    }
}
