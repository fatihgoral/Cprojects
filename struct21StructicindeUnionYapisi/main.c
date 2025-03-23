#include <stdio.h>
#include <stdlib.h>

struct degerTip {
    int tip;
    union {
        char kar;
        float sayi;
    } bir;
};

int main() {
    struct degerTip degerler[20];
    char satir;
    int i = -1;
    int j;
    int n = 0;
    float ortalama = 0.0;

    do {
        i++;
        printf("Lutfen bir tamsayi giriniz:\n");
        scanf("%d", &degerler[i].tip);

        // Buffer'daki newline karakterini temizle
        while ((satir = getchar()) != '\n' && satir != EOF);

        if (degerler[i].tip == 1) {
            printf("Karakter giriniz:\n");
            scanf("%c", &degerler[i].bir.kar);

        } else if (degerler[i].tip == 0) {
            printf("Reel sayi giriniz:\n");
            scanf("%f", &degerler[i].bir.sayi);
        }

    } while (degerler[i].tip == 0 || degerler[i].tip == 1);

    for (j = 0; j <= i; j++) {
        if (degerler[j].tip == 0) {
            ortalama += degerler[j].bir.sayi;
            n++;
        }
    }

    if (n > 0) {
        ortalama = ortalama / n;
        printf("Reel sayilarin ortalamasi: %f\n", ortalama);
    } else {
        printf("Reel sayi bulunmadi.\n");
    }

    return 0;
}
