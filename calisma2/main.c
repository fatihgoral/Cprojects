#include <stdio.h>

void yazdir(char *kelime) {
    while (*kelime != '\0') {  // Kelime sonlanana kadar yazdır
        printf("%c", *kelime);  // Boşluk koymadan yazdır
        kelime++;  // Pointer'ı bir artır
    }
    printf("\n");
}

void kucuktenBuyuge(char *kelime) {
    while (*kelime != '\0') {  // Kelimenin sonuna kadar
        // Eğer karakter küçük harfse, büyük harfe çevir
        if (*kelime >= 'a' && *kelime <= 'z') {
            *kelime = *kelime - ('a' - 'A');
        }
        kelime++;  // Pointer'ı bir artır
    }
}

int main() {
    // Kullanıcı yerine direkt kelimeler atıyoruz
    char kelimeler[3][50] = {
        "fatih",
        "okan",
        "ali"
    };

    int i;

    // Kelimelerin küçük harflerini büyük harfe dönüştür ve yazdır
    printf("Kelimenin kucuk harfleri buyuk harfe donusturulduktan sonra:\n");
    for (i = 0; i < 3; i++) {
        kucuktenBuyuge(kelimeler[i]);  // Küçük harfleri büyük harfe dönüştür
        printf("Kelime %d: ", i + 1);
        yazdir(kelimeler[i]);  // Kelimeyi karakter karakter yazdır
    }

    return 0;
}
