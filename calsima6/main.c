#include <stdio.h>

void isimYazdir(char *isim[], int uzunluk);  // Fonksiyon bildirimi
void buyukHarfYap(char *kelime);  // Küçük harfleri büyük harfe çeviren fonksiyon
void kucukHarfYazdir(char *kelime);  // Küçük harfleri ekrana yazdýran fonksiyon

int main()
{
    // 5 kiþinin adý içeren bir dizi
    char metin[5][20] = {"okan", "fatma", "Ayse", "Fatih", "Huseyin"};

    // Her bir kiþinin ismini tutacak iþaretçi dizisi
    char *isim[5];

    // metin dizisindeki her ismi isim dizisine aktar
    for (int i = 0; i < 5; i++) {
        isim[i] = metin[i];  // metin[i]'yi isim[i]'ye atýyoruz
    }

    // Küçük harflerle isimleri yazdýrýyoruz
    printf("Kucuk Harflerle Yazdirma:\n");
    isimYazdir(isim, 5, 0);  // Küçük harfli yazdýrma

    // Büyük harflerle isimleri yazdýrýyoruz
    printf("\nBuyuk Harflerle Yazdirma:\n");
    isimYazdir(isim, 5, 1);  // Büyük harfli yazdýrma

    return 0;
}

// Ýsimleri yazdýran fonksiyon
void isimYazdir(char *isim[], int uzunluk, int buyuk) {
    // Dizi elemanlarý üzerinde döngü
    for (int i = 0; i < uzunluk; i++) {
        if (buyuk == 0) {
            kucukHarfYazdir(isim[i]);  // Küçük harflerle yazdýr
        } else {
            buyukHarfYap(isim[i]);  // Büyük harflerle yazdýr
            printf("%s\n", isim[i]);  // Her bir ismi yazdýrýyoruz
        }
    }
}

// Küçük harfleri ekrana yazdýran fonksiyon
void kucukHarfYazdir(char *kelime) {
    while (*kelime != '\0') {
        printf("%c", *kelime);  // Karakteri ekrana yazdýr
        kelime++;  // Pointer'ý bir sonraki karaktere kaydýr
    }
    printf("\n");  // Satýr sonu ekliyoruz
}

// Küçük harfleri büyük harfe çeviren fonksiyon
void buyukHarfYap(char *kelime) {
    while (*kelime != '\0') {
        // Eðer harf küçükse, 32'yi çýkararak büyük harfe dönüþtür
        if (*kelime >= 'a' && *kelime <= 'z') {
            *kelime = *kelime - 32;  // Küçük harfleri büyük yapýyoruz
        }
        kelime++;  // Pointer'ý bir sonraki karaktere kaydýr
    }
}
