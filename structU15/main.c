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

    toplam = toplam - max - min; // En y�ksek ve en d���k puan ��kar�l�yor.
    return toplam / 8.0; // Kalan 8 puan�n ortalamas� al�n�yor.
}

int main() {
    struct yarismacitip patenci[100];
    int n;
    int i, j;
    float max = 0.0;
    int birinci = 0; // Birinciyi tutacak de�i�ken

    printf("Lutfen yarismaci sayisini giriniz: ");
    scanf("%d", &n);
    getchar(); // scanf sonras� bo�luk karakterini temizlemek i�in

    for (j = 0; j < n; j++) {
        printf("Yarismaci adini giriniz: ");
        gets(patenci[j].isim); // gets() kullan�m�

        printf("Yarismaci soyadini giriniz: ");
        gets(patenci[j].soyisim); // gets() kullan�m�

        printf("Hakem puanlarini giriniz (0 ile 6 arasinda, 10 puan):\n");
        for (i = 0; i < 10; i++) {
            do {
                printf("Puan %d: ", i+1);
                scanf("%f", &patenci[j].puan[i]); // Puan� al

                // Puan�n 0 ile 6 aras�nda olup olmad���n� kontrol et
                if (patenci[j].puan[i] < 0 || patenci[j].puan[i] > 6) {
                    printf("Ge�ersiz puan! L�tfen 0 ile 6 aras�nda bir puan girin.\n");
                }
            } while (patenci[j].puan[i] < 0 || patenci[j].puan[i] > 6); // Ge�ersiz puan girildi�inde d�ng� devam eder
        }

        patenci[j].performans = puanhesap(patenci[j]); // Performans puan�n� hesapla
        printf("Performans Puan�: %f\n", patenci[j].performans);

        if (patenci[j].performans > max) {
            max = patenci[j].performans;
            birinci = j; // En y�ksek performans� bulan yar��mac�n�n index'ini tut
        }
    }

    printf("Yarismanin birincisi:\n");
    printf("Isim: %s\t Soyisim: %s\t Puan: %f\n", patenci[birinci].isim, patenci[birinci].soyisim, max);

    return 0;
}
