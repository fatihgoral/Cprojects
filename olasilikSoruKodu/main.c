#include <stdio.h>

int main() {
    int toys, kids;
    int total_ways = 1;

    // Kullanýcýdan oyuncak ve çocuk sayýsýný al
    printf("Lutfen oyuncak sayisini giriniz: ");
    scanf("%d", &toys);

    printf("Lutfen cocuk sayisini giriniz: ");
    scanf("%d", &kids);

    // Oyuncak sayýsý çocuk sayýsýndan azsa veya eþitse iþlemi yap
    if (toys >= kids) {
        // Oyuncaklarý seçip daðýtmak için olasýlýklarý hesapla
        for (int i = 0; i < kids; i++) {
            total_ways *= (toys - i); // Oyuncaklarýn çocuklara daðýtýmý
        }
    } else {
        printf("Oyuncak sayisi cocuk sayisindan az olamaz.\n");
        return 1;
    }

    printf("Toplam farkli dagitim sekli: %d\n", total_ways);

    return 0;
}
