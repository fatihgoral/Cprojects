#include <stdio.h>

void isimYazdir(char *isim[], int uzunluk);  // Fonksiyon bildirimi
void buyukHarfYap(char *kelime);  // K���k harfleri b�y�k harfe �eviren fonksiyon
void kucukHarfYazdir(char *kelime);  // K���k harfleri ekrana yazd�ran fonksiyon

int main()
{
    // 5 ki�inin ad� i�eren bir dizi
    char metin[5][20] = {"okan", "fatma", "Ayse", "Fatih", "Huseyin"};

    // Her bir ki�inin ismini tutacak i�aret�i dizisi
    char *isim[5];

    // metin dizisindeki her ismi isim dizisine aktar
    for (int i = 0; i < 5; i++) {
        isim[i] = metin[i];  // metin[i]'yi isim[i]'ye at�yoruz
    }

    // K���k harflerle isimleri yazd�r�yoruz
    printf("Kucuk Harflerle Yazdirma:\n");
    isimYazdir(isim, 5, 0);  // K���k harfli yazd�rma

    // B�y�k harflerle isimleri yazd�r�yoruz
    printf("\nBuyuk Harflerle Yazdirma:\n");
    isimYazdir(isim, 5, 1);  // B�y�k harfli yazd�rma

    return 0;
}

// �simleri yazd�ran fonksiyon
void isimYazdir(char *isim[], int uzunluk, int buyuk) {
    // Dizi elemanlar� �zerinde d�ng�
    for (int i = 0; i < uzunluk; i++) {
        if (buyuk == 0) {
            kucukHarfYazdir(isim[i]);  // K���k harflerle yazd�r
        } else {
            buyukHarfYap(isim[i]);  // B�y�k harflerle yazd�r
            printf("%s\n", isim[i]);  // Her bir ismi yazd�r�yoruz
        }
    }
}

// K���k harfleri ekrana yazd�ran fonksiyon
void kucukHarfYazdir(char *kelime) {
    while (*kelime != '\0') {
        printf("%c", *kelime);  // Karakteri ekrana yazd�r
        kelime++;  // Pointer'� bir sonraki karaktere kayd�r
    }
    printf("\n");  // Sat�r sonu ekliyoruz
}

// K���k harfleri b�y�k harfe �eviren fonksiyon
void buyukHarfYap(char *kelime) {
    while (*kelime != '\0') {
        // E�er harf k���kse, 32'yi ��kararak b�y�k harfe d�n��t�r
        if (*kelime >= 'a' && *kelime <= 'z') {
            *kelime = *kelime - 32;  // K���k harfleri b�y�k yap�yoruz
        }
        kelime++;  // Pointer'� bir sonraki karaktere kayd�r
    }
}
