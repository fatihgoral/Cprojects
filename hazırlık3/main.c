#include <stdio.h>
#include <stdlib.h>
#include <ctype.h> // ASCII de�erleri i�in

// Fonksiyon bildirimi
void isimYazdir(char **isim);
void harfSayisiVeCevir(char *harfler, int sayi);

int main()
{
    char metin[5][20] = {"okan", "fatma", "Ayse", "Fatih", "Huseyin"};
    char *isim[5];  // Dizi i�aret�ileri array'i

    // metin dizisini isim dizisine aktar
    for (int i = 0; i < 5; i++) {
        isim[i] = metin[i];  // her isim i�aret�isine metin[i]'yi at�yoruz
    }

    isimYazdir(isim);  // Fonksiyonu �a��r�yoruz

    // Kullan�c�dan harf alaca��z
    int sayi;
    printf("Kac harf gireceksiniz? ");
    scanf("%d", &sayi);

    // Harfleri al�p i�leme
    char *harfler = (char *)malloc(sayi * sizeof(char));
    printf("%d harf girin: ", sayi);
    for (int i = 0; i < sayi; i++) {
        scanf(" %c", &harfler[i]);  // " " bo�luk b�rakmak, �nceki '\n' karakterini almas�n� engeller
    }

    // Harf say�s�n� ve b�y�k harfleri k���k harfe �evirme i�lemini yap�yoruz
    harfSayisiVeCevir(harfler, sayi);

    free(harfler); // Dinamik bellek kullan�m�n� serbest b�rak�yoruz

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

// Kullan�c�dan al�nan harflerin say�s�n� ve b�y�k harfleri k���k harfe �evirme i�lemi
void harfSayisiVeCevir(char *harfler, int sayi) {
    int harfSayisi[26] = {0}; // Her harf i�in say�c�
    printf("\nGirilen harflerin b�y�kten k����e d�n���m�:\n");
    for (int i = 0; i < sayi; i++) {
        if (isupper(harfler[i])) {  // E�er b�y�k harfse k���k harfe �evir
            printf("%c -> %c\n", harfler[i], tolower(harfler[i]));  // D�n���m�n� ekrana yazd�r�yoruz
            harfler[i] = tolower(harfler[i]);
        }
    }

    printf("\nGirilen harfler:\n");
    for (int i = 0; i < sayi; i++) {
        printf("%c ", harfler[i]);  // Girilen harfleri yazd�r�yoruz
    }

    // Harflerin frekanslar�
    int harfSayisiFrekanse[26] = {0}; // Her harf i�in frekans say�s�
    printf("\n\nHarflerin frekanslar�:\n");
    for (int i = 0; i < sayi; i++) {
        harfSayisiFrekanse[harfler[i] - 'a']++; // Harflerin say�s�n� art�r�yoruz
    }

    for (int i = 0; i < 26; i++) {
        if (harfSayisiFrekanse[i] > 0) {
            printf("%c: %d\n", 'a' + i, harfSayisiFrekanse[i]);  // Her harfi ve say�s�n� yazd�r�yoruz
        }
    }
}
