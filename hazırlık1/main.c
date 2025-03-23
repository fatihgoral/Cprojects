#include <stdio.h>
#include <stdlib.h>
#include <ctype.h> // ASCII deðerleri için

// Fonksiyon bildirimi
void isimYazdir(char **isim);
void kelimeyiBuyukHarfeCevir(char *kelime, int sayi);

int main()
{
    char metin[5][20] = {"okan", "fatma", "Ayse", "Fatih", "Huseyin"};
    char *isim[5];  // Dizi iþaretçileri array'i

    // metin dizisini isim dizisine aktar
    for (int i = 0; i < 5; i++) {
        isim[i] = metin[i];  // her isim iþaretçisine metin[i]'yi atýyoruz
    }

    isimYazdir(isim);  // Fonksiyonu çaðýrýyoruz

    // Kullanýcýdan kelime alacaðýz
    int sayi;
    printf("Kac harfli kelime gireceksiniz? ");
    scanf("%d", &sayi);

    // Kelimeyi alýp iþleme
    char *kelime = (char *)malloc((sayi + 1) * sizeof(char));  // +1 null terminator için
    printf("%d harfli kelimeyi girin: ", sayi);
    scanf("%s", kelime);  // Kullanýcýdan kelime alýyoruz

    // Kelimeyi büyük harfe çevirme iþlemini yapýyoruz
    kelimeyiBuyukHarfeCevir(kelime, sayi);

    free(kelime); // Dinamik bellek kullanýmýný serbest býrakýyoruz

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

// Kullanýcýdan alýnan kelimenin tüm harflerini büyük harfe çevirme iþlemi
void kelimeyiBuyukHarfeCevir(char *kelime, int sayi) {
    printf("\nGirilen kelimenin büyük harfe dönüþümü:\n");

    for (int i = 0; i < sayi; i++) {
        kelime[i] = toupper(kelime[i]);  // Küçük harfi büyük harfe çeviriyoruz
        printf("%c", kelime[i]);  // Deðiþtirilen harfi ekrana yazdýrýyoruz
    }

    printf("\n");
}
