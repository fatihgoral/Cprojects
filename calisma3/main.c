#include <stdio.h>

void yazdir(char *kelime) {
    while (*kelime != '\0') {  // Kelime sonlanana kadar yazd�r
        printf("%c", *kelime);  // Bo�luk koymadan yazd�r
        kelime++;  // Pointer'� bir art�r
    }
    printf("\n");
}

void kucuktenBuyuge(char *kelime) {
    while (*kelime != '\0') {  // Kelimenin sonuna kadar
        // E�er karakter k���k harfse, b�y�k harfe �evir
        if (*kelime >= 'a' && *kelime <= 'z') {
            *kelime = *kelime - ('a' - 'A');
        }
        kelime++;  // Pointer'� bir art�r
    }
}

void harfSayisiVeDegistir(int sayi) {
    char harf;
    int i;
    int kucukA = 0, buyukA = 0;

    // Kullan�c�dan harfleri al
    for (i = 0; i < sayi; i++) {
        printf("Bir harf girin: ");
        scanf(" %c", &harf);  // Bo�luk b�rakarak �nceki newline'� atla

        // E�er harf k���kse, b�y��e �evir
        if (harf >= 'a' && harf <= 'z') {
            harf = harf - ('a' - 'A');  // K���k harfi b�y�k harfe �evir
        }

        // Say�lar� takip et
        if (harf == 'A') {
            buyukA++;
        } else if (harf == 'a') {
            kucukA++;
        }
    }

    // Sonu�lar� yazd�r
    printf("\nKucuk 'a' harfleri: %d\n", kucukA);
    printf("Buyuk 'A' harfleri: %d\n", buyukA);
    printf("Toplam 'a' harfleri: %d\n", kucukA + buyukA);
}

int main() {
    // Kullan�c� yerine direkt kelimeler at�yoruz
    char kelimeler[3][50] = {
        "fatih",
        "okan",
        "ali"
    };

    int i;

    // Kelimelerin k���k harflerini b�y�k harfe d�n��t�r ve yazd�r
    printf("Kelimenin kucuk harfleri buyuk harfe donusturulduktan sonra:\n");
    for (i = 0; i < 3; i++) {
        kucuktenBuyuge(kelimeler[i]);  // K���k harfleri b�y�k harfe d�n��t�r
        printf("Kelime %d: ", i + 1);
        yazdir(kelimeler[i]);  // Kelimeyi karakter karakter yazd�r
    }

    // Harf say�s�n� ve d�n��t�rme i�lemini yap
    int sayi;
    printf("\nHarf say�s�n� girin: ");
    scanf("%d", &sayi);
    harfSayisiVeDegistir(sayi);  // Harf say�s�n� al ve d�n��t�r

    return 0;
}
