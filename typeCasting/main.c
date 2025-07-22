#include <stdio.h>

int main() {
    int notlar[] = {50, 70, 85, 90, 100};
    float toplam = 0;
    float ortalama;
    int n = sizeof(notlar) / sizeof(notlar[0]);

    for (int i = 0; i < n; i++) {
        toplam += (float)notlar[i];  // her eleman float'a çevriliyor
    }

    ortalama = toplam / n;
    printf("Ortalama: %.2f\n", ortalama);

    return 0;
}
