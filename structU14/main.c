#include <stdio.h>
#include <stdlib.h>

struct yarismacitip {
    char isim[20];
    char soyisim[20];
    float puan[10];
    float performans;
};

float puanhesap(struct yarismacitip pat) {
    int i;
    float max = 0.0;
    float min = 6.0;
    float toplam = 0.0;

    for (i = 0; i < 10; i++) {
        if (pat.puan[i] > max) {
            max = pat.puan[i];
        }
        if (pat.puan[i] < min) {
            min = pat.puan[i];
        }
        toplam += pat.puan[i];
    }

    toplam = toplam - max - min; // En yüksek ve en düþük puan çýkarýlýyor.
    return toplam / 8.0; // Kalan 8 puanýn ortalamasý alýnýyor.
}

int main() {
    struct yarismacitip patenci;
    int i;

    printf("Yarismacinin adi: ");
    scanf("%s", patenci.isim);

    printf("Yarismacinin soyadi: ");
    scanf("%s", patenci.soyisim);

    printf("Hakem puanlarini giriniz (0 ile 6 arasinda):\n");
    for (i = 0; i < 10; i++) {
        do {
            printf("Puan %d: ", i + 1);
            scanf("%f", &patenci.puan[i]);
            if (patenci.puan[i] < 0.0 || patenci.puan[i] > 6.0) {
                printf("Hata: Puan 0 ile 6 arasinda olmali!\n");
            }
        } while (patenci.puan[i] < 0.0 || patenci.puan[i] > 6.0);
    }

    patenci.performans = puanhesap(patenci);
    printf("\nYarismacinin performans puani: %.2f\n", patenci.performans);

    return 0;
}
