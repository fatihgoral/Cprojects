#include <stdio.h>
#include <stdlib.h>

// Fonksiyon bildirimi
void isimYazdir(char **isim);
void harfSayisiVeCevir(char harfler[], int n, char metin[5][20]);

int main()
{
    char metin[5][20] = {"okan", "fatma", "Ayse", "Fatih", "Huseyin"};
    char *isim[5];  // Dizi i�aret�ileri array'i

    // metin dizisini isim dizisine aktar
    for (int i = 0; i < 5; i++) {
        isim[i] = metin[i];  // her isim i�aret�isine metin[i]'yi at�yoruz
    }

    isimYazdir(isim);  // �simleri yazd�r�yoruz

    // Kullan�c�dan ka� harf girece�i soruluyor
    int n;
    printf("\nKa� harf gireceksiniz? ");
    scanf("%d", &n);

    // Kullan�c�dan harfler al�n�yor
    char harfler[n];
    printf("\n%d harfi girin: \n", n);
    for (int i = 0; i < n; i++) {
        printf("%d. Harfi girin: ", i+1);
        scanf(" %c", &harfler[i]);  // Her harf i�in i�lem yap�lacak
    }

    // Harf say�s�n� ve d�n���m�n� yapan fonksiyonu �a��r�yoruz
    harfSayisiVeCevir(harfler, n, metin);

    return 0;
}

// �simleri yazd�ran fonksiyon
void isimYazdir(char **isim) {
    printf("\n5 Kelime:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; (*(isim + i))[j] != '\0'; j++) {
            printf("%c", (*(isim + i))[j]);  // Karakter karakter yazd�r�yoruz
        }
        printf("\n");  // Sat�r sonu ekliyoruz
    }
}

// Harf say�s�n� ve k���k harfleri b�y�k harfe �evirme i�lemi yapan fonksiyon
void harfSayisiVeCevir(char harfler[], int n, char metin[5][20]) {
    int toplamHarfiSayisi[n];  // Her harf i�in toplam say�lar
    int harfSayisi[n];         // Her harfin b�y�k harfe �evrilmi� halindeki say�s�

    // Harf say�s�n� s�f�rl�yoruz
    for (int i = 0; i < n; i++) {
        toplamHarfiSayisi[i] = 0;
        harfSayisi[i] = 0;
    }

    // Harf say�s�n� ve d�n���m�n� yap�yoruz
    for (int i = 0; i < 5; i++) {
        for (int j = 0; metin[i][j] != '\0'; j++) {
            for (int k = 0; k < n; k++) {
                // Girilen harflerin b�y�k veya k���k olmas�n� kontrol ederek say�yoruz
                if (metin[i][j] == harfler[k] || metin[i][j] == harfler[k] + 32) {
                    toplamHarfiSayisi[k]++;
                }
            }
        }
    }

    // 5 kelimenin t�m�n� b�y�k harfe �eviriyoruz
    printf("\nB�y�k harfe �evrilmi� kelimeler:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; metin[i][j] != '\0'; j++) {
            // Harfi b�y�k harfe �eviriyoruz
            if (metin[i][j] >= 'a' && metin[i][j] <= 'z') {
                metin[i][j] = metin[i][j] - 32;  // k���k harfi b�y�k harfe �evir
            }

            // B�y�k harfe �evrilmi� kelimeleri yazd�r�yoruz
            printf("%c", metin[i][j]);
        }
        printf("\n");
    }

    // Girilen harflerin b�y�k harfli kelimelerdeki say�s�n� buluyoruz
    for (int k = 0; k < n; k++) {
        for (int i = 0; i < 5; i++) {
            for (int j = 0; metin[i][j] != '\0'; j++) {
                if (metin[i][j] == harfler[k] - 32) {  // B�y�k harf
                    harfSayisi[k]++;
                }
            }
        }
    }

    // Sonu�lar� yazd�r�yoruz
    for (int k = 0; k < n; k++) {
        printf("\n'%c' harfi toplam %d kelimede bulundu.\n", harfler[k], toplamHarfiSayisi[k]);
        printf("B�y�k harfe �evrilmi� kelimelerde toplam '%c' harfi sayisi: %d\n", harfler[k] - 32, harfSayisi[k]);
    }
}
