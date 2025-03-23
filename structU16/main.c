#include <stdio.h>
#include <stdlib.h>

struct ogrencitip {
    int no;
    char cevap[10];
};

struct sonucTip {
    int no;
    int not;
};

int main() {
    struct ogrencitip ogrenci[30];
    struct sonucTip sonuc[30];
    char anahtar[10];
    int i, j;
    int dogru, yanlis;

    // Cevap anahtarını al
    printf("Lutfen cevap anahtarini giriniz (10 harf):\n");
    for (i = 0; i < 10; i++) {
        scanf(" %c", &anahtar[i]);
    }

    // Öğrenci bilgilerini al
    printf("Ogrenci bilgilerini giriniz: \n");
    for (j = 0; j < 30; j++) {
        printf("Ogrenci no: ");
        scanf("%d", &ogrenci[j].no);
        dogru = yanlis = 0;
        printf("Cevaplari giriniz (10 harf): ");
        for (i = 0; i < 10; i++) {
            scanf(" %c", &ogrenci[j].cevap[i]);
            if (anahtar[i] == ogrenci[j].cevap[i]) {
                dogru++;
            } else if (ogrenci[j].cevap[i] != ' ') {
                yanlis++;
            }
        }

        sonuc[j].no = ogrenci[j].no;
        sonuc[j].not = dogru - (yanlis / 4);

        // Ara sonuçları göster
        printf("Dogru: %d, Yanlis: %d, Not: %d\n", dogru, yanlis, sonuc[j].not);
    }

    // Sonuçları göster
    printf("\nSonuclar:\n");
    for (j = 0; j < 30; j++) {
        printf("Ogrenci no: %d, Not: %d\n", sonuc[j].no, sonuc[j].not);
    }

    return 0;
}
