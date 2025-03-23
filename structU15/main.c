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
    struct yarismacitip patenci[100];
    int n;
    int i, j;
    float max = 0.0;
    int birinci = 0; // Birinciyi tutacak deðiþken

    printf("Lutfen yarismaci sayisini giriniz: ");
    scanf("%d", &n);
    getchar(); // scanf sonrasý boþluk karakterini temizlemek için

    for (j = 0; j < n; j++) {
        printf("Yarismaci adini giriniz: ");
        gets(patenci[j].isim); // gets() kullanýmý

        printf("Yarismaci soyadini giriniz: ");
        gets(patenci[j].soyisim); // gets() kullanýmý

        printf("Hakem puanlarini giriniz (0 ile 6 arasinda, 10 puan):\n");
        for (i = 0; i < 10; i++) {
            do {
                printf("Puan %d: ", i+1);
                scanf("%f", &patenci[j].puan[i]); // Puaný al

                // Puanýn 0 ile 6 arasýnda olup olmadýðýný kontrol et
                if (patenci[j].puan[i] < 0 || patenci[j].puan[i] > 6) {
                    printf("Geçersiz puan! Lütfen 0 ile 6 arasýnda bir puan girin.\n");
                }
            } while (patenci[j].puan[i] < 0 || patenci[j].puan[i] > 6); // Geçersiz puan girildiðinde döngü devam eder
        }

        patenci[j].performans = puanhesap(patenci[j]); // Performans puanýný hesapla
        printf("Performans Puaný: %f\n", patenci[j].performans);

        if (patenci[j].performans > max) {
            max = patenci[j].performans;
            birinci = j; // En yüksek performansý bulan yarýþmacýnýn index'ini tut
        }
    }

    printf("Yarismanin birincisi:\n");
    printf("Isim: %s\t Soyisim: %s\t Puan: %f\n", patenci[birinci].isim, patenci[birinci].soyisim, max);

    return 0;
}
