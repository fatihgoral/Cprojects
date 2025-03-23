#include <stdio.h>
#include <string.h>

// Struct tanımı
struct bilgiler {
    char isim[31];
    int yas;
    float agirlik;
};

int main() {
    // Struct değişkenleri tanımlama
    struct bilgiler ahmet, mehmet;

    // "ahmet" struct'ına değer atama
    strcpy(ahmet.isim, "Ahmet Yılmaz");
    ahmet.yas = 25;
    ahmet.agirlik = 78.5;

    // "ahmet" struct'ını ekrana yazdırma
    printf("Ahmet'in Bilgileri:\n");
    printf("İsim: %s, Yaş: %d, Ağırlık: %.2f kg\n", ahmet.isim, ahmet.yas, ahmet.agirlik);

    // Struct kopyalama işlemi
    mehmet = ahmet;

    // "mehmet" struct'ının ismini değiştirme
    strcpy(mehmet.isim, "Mehmet Kaya");

    // "mehmet" struct'ını ekrana yazdırma
    printf("\nMehmet'in Bilgileri (Ahmet'ten kopyalandı):\n");
    printf("İsim: %s, Yaş: %d, Ağırlık: %.2f kg\n", mehmet.isim, mehmet.yas, mehmet.agirlik);

    return 0;
}
