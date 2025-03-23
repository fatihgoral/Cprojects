#include <stdio.h>
#include <stdlib.h>

struct zaman {
    int saniye;
    int dakika;
    int saat;
};

void fark(struct zaman t1, struct zaman t2, struct zaman *farki) {
    if (t2.saniye > t1.saniye) {
        --t1.dakika;
        t1.saniye += 60;
    }
    farki->saniye = t1.saniye - t2.saniye;

    if (t2.dakika > t1.dakika) {
        --t1.saat;
        t1.dakika += 60;
    }
    farki->dakika = t1.dakika - t2.dakika;
    farki->saat = t1.saat - t2.saat;
}

int main() {
    struct zaman t1, t2, frk;

    printf("Baslangic zamani (saat, dakika, saniye): ");
    scanf("%d %d %d", &t1.saat, &t1.dakika, &t1.saniye);

    printf("Bitis zamani (saat, dakika, saniye): ");
    scanf("%d %d %d", &t2.saat, &t2.dakika, &t2.saniye);

    // Kullanýcýdan geçerli veri alýndýðýný kontrol et
    if (t1.saat < 0 || t1.saat > 23 || t1.dakika < 0 || t1.dakika > 59 || t1.saniye < 0 || t1.saniye > 59 ||
        t2.saat < 0 || t2.saat > 23 || t2.dakika < 0 || t2.dakika > 59 || t2.saniye < 0 || t2.saniye > 59) {
        printf("Hata: Saat, dakika veya saniye degerleri gecersiz.\n");
        return 1;
    }

    // Baþlangýç zamanýnýn bitiþ zamanýndan sonra olup olmadýðýný kontrol et
    if (t1.saat < t2.saat ||
        (t1.saat == t2.saat && t1.dakika < t2.dakika) ||
        (t1.saat == t2.saat && t1.dakika == t2.dakika && t1.saniye < t2.saniye)) {
        printf("Hata: Baslangic zamani bitis zamanindan sonra olamaz.\n");
        return 1;
    }

    fark(t1, t2, &frk);

    printf("\nZaman farki: %02d:%02d:%02d\n", frk.saat, frk.dakika, frk.saniye);

    return 0;
}
