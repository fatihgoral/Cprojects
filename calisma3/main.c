#include <stdio.h>

void yazdir(char *kelime) {
    while (*kelime != '\0') {  // Kelime sonlanana kadar yazdýr
        printf("%c", *kelime);  // Boþluk koymadan yazdýr
        kelime++;  // Pointer'ý bir artýr
    }
    printf("\n");
}

void kucuktenBuyuge(char *kelime) {
    while (*kelime != '\0') {  // Kelimenin sonuna kadar
        // Eðer karakter küçük harfse, büyük harfe çevir
        if (*kelime >= 'a' && *kelime <= 'z') {
            *kelime = *kelime - ('a' - 'A');
        }
        kelime++;  // Pointer'ý bir artýr
    }
}

void harfSayisiVeDegistir(int sayi) {
    char harf;
    int i;
    int kucukA = 0, buyukA = 0;

    // Kullanýcýdan harfleri al
    for (i = 0; i < sayi; i++) {
        printf("Bir harf girin: ");
        scanf(" %c", &harf);  // Boþluk býrakarak önceki newline'ý atla

        // Eðer harf küçükse, büyüðe çevir
        if (harf >= 'a' && harf <= 'z') {
            harf = harf - ('a' - 'A');  // Küçük harfi büyük harfe çevir
        }

        // Sayýlarý takip et
        if (harf == 'A') {
            buyukA++;
        } else if (harf == 'a') {
            kucukA++;
        }
    }

    // Sonuçlarý yazdýr
    printf("\nKucuk 'a' harfleri: %d\n", kucukA);
    printf("Buyuk 'A' harfleri: %d\n", buyukA);
    printf("Toplam 'a' harfleri: %d\n", kucukA + buyukA);
}

int main() {
    // Kullanýcý yerine direkt kelimeler atýyoruz
    char kelimeler[3][50] = {
        "fatih",
        "okan",
        "ali"
    };

    int i;

    // Kelimelerin küçük harflerini büyük harfe dönüþtür ve yazdýr
    printf("Kelimenin kucuk harfleri buyuk harfe donusturulduktan sonra:\n");
    for (i = 0; i < 3; i++) {
        kucuktenBuyuge(kelimeler[i]);  // Küçük harfleri büyük harfe dönüþtür
        printf("Kelime %d: ", i + 1);
        yazdir(kelimeler[i]);  // Kelimeyi karakter karakter yazdýr
    }

    // Harf sayýsýný ve dönüþtürme iþlemini yap
    int sayi;
    printf("\nHarf sayýsýný girin: ");
    scanf("%d", &sayi);
    harfSayisiVeDegistir(sayi);  // Harf sayýsýný al ve dönüþtür

    return 0;
}
