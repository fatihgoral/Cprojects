#include <stdio.h>

struct ogrenciler {
    char ad[20];
    char bolum[50];
    int sinif;
    float ort;
} ogr[3] = {
    {"Ali", "Bilgisayar Muhendisligi", 2, 3.45},
    {"Elif", "Elektrik Elektronik Muhendisligi", 3, 3.85},
    {"Mehmet", "Makine Muhendisligi", 1, 3.20}
};

int main() {
    // Öðrenci bilgilerini yazdýrma
    for (int i = 0; i < 3; i++) {
        printf("Ogrenci %d:\n", i + 1);
        printf("Ad: %s\n", ogr[i].ad);
        printf("Bolum: %s\n", ogr[i].bolum);
        printf("Sinif: %d\n", ogr[i].sinif);
        printf("Ortalama: %.2f\n", ogr[i].ort);
        printf("-------------------\n");
    }

    return 0;
}
