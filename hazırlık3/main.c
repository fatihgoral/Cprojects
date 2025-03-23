#include <stdio.h>
#include <stdlib.h>
#include <ctype.h> // ASCII deðerleri için

// Fonksiyon bildirimi
void isimYazdir(char **isim);
void harfSayisiVeCevir(char *harfler, int sayi);

int main()
{
    char metin[5][20] = {"okan", "fatma", "Ayse", "Fatih", "Huseyin"};
    char *isim[5];  // Dizi iþaretçileri array'i

    // metin dizisini isim dizisine aktar
    for (int i = 0; i < 5; i++) {
        isim[i] = metin[i];  // her isim iþaretçisine metin[i]'yi atýyoruz
    }

    isimYazdir(isim);  // Fonksiyonu çaðýrýyoruz

    // Kullanýcýdan harf alacaðýz
    int sayi;
    printf("Kac harf gireceksiniz? ");
    scanf("%d", &sayi);

    // Harfleri alýp iþleme
    char *harfler = (char *)malloc(sayi * sizeof(char));
    printf("%d harf girin: ", sayi);
    for (int i = 0; i < sayi; i++) {
        scanf(" %c", &harfler[i]);  // " " boþluk býrakmak, önceki '\n' karakterini almasýný engeller
    }

    // Harf sayýsýný ve büyük harfleri küçük harfe çevirme iþlemini yapýyoruz
    harfSayisiVeCevir(harfler, sayi);

    free(harfler); // Dinamik bellek kullanýmýný serbest býrakýyoruz

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

// Kullanýcýdan alýnan harflerin sayýsýný ve büyük harfleri küçük harfe çevirme iþlemi
void harfSayisiVeCevir(char *harfler, int sayi) {
    int harfSayisi[26] = {0}; // Her harf için sayýcý
    printf("\nGirilen harflerin büyükten küçüðe dönüþümü:\n");
    for (int i = 0; i < sayi; i++) {
        if (isupper(harfler[i])) {  // Eðer büyük harfse küçük harfe çevir
            printf("%c -> %c\n", harfler[i], tolower(harfler[i]));  // Dönüþümünü ekrana yazdýrýyoruz
            harfler[i] = tolower(harfler[i]);
        }
    }

    printf("\nGirilen harfler:\n");
    for (int i = 0; i < sayi; i++) {
        printf("%c ", harfler[i]);  // Girilen harfleri yazdýrýyoruz
    }

    // Harflerin frekanslarý
    int harfSayisiFrekanse[26] = {0}; // Her harf için frekans sayýsý
    printf("\n\nHarflerin frekanslarý:\n");
    for (int i = 0; i < sayi; i++) {
        harfSayisiFrekanse[harfler[i] - 'a']++; // Harflerin sayýsýný artýrýyoruz
    }

    for (int i = 0; i < 26; i++) {
        if (harfSayisiFrekanse[i] > 0) {
            printf("%c: %d\n", 'a' + i, harfSayisiFrekanse[i]);  // Her harfi ve sayýsýný yazdýrýyoruz
        }
    }
}
