#include <stdio.h>
#include <stdlib.h>
#include <ctype.h> // ASCII de�erleri i�in

// Fonksiyon bildirimi
void isimYazdir(char **isim);
void kelimeyiBuyukHarfeCevir(char *kelime, int sayi);

int main()
{
    char metin[5][20] = {"okan", "fatma", "Ayse", "Fatih", "Huseyin"};
    char *isim[5];  // Dizi i�aret�ileri array'i

    // metin dizisini isim dizisine aktar
    for (int i = 0; i < 5; i++) {
        isim[i] = metin[i];  // her isim i�aret�isine metin[i]'yi at�yoruz
    }

    isimYazdir(isim);  // Fonksiyonu �a��r�yoruz

    // Kullan�c�dan kelime alaca��z
    int sayi;
    printf("Kac harfli kelime gireceksiniz? ");
    scanf("%d", &sayi);

    // Kelimeyi al�p i�leme
    char *kelime = (char *)malloc((sayi + 1) * sizeof(char));  // +1 null terminator i�in
    printf("%d harfli kelimeyi girin: ", sayi);
    scanf("%s", kelime);  // Kullan�c�dan kelime al�yoruz

    // Kelimeyi b�y�k harfe �evirme i�lemini yap�yoruz
    kelimeyiBuyukHarfeCevir(kelime, sayi);

    free(kelime); // Dinamik bellek kullan�m�n� serbest b�rak�yoruz

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

// Kullan�c�dan al�nan kelimenin t�m harflerini b�y�k harfe �evirme i�lemi
void kelimeyiBuyukHarfeCevir(char *kelime, int sayi) {
    printf("\nGirilen kelimenin b�y�k harfe d�n���m�:\n");

    for (int i = 0; i < sayi; i++) {
        kelime[i] = toupper(kelime[i]);  // K���k harfi b�y�k harfe �eviriyoruz
        printf("%c", kelime[i]);  // De�i�tirilen harfi ekrana yazd�r�yoruz
    }

    printf("\n");
}
