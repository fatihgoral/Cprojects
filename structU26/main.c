#include <stdio.h>
#include <stdlib.h>
#define N 4

struct oyuncu {
    char soyisim[20];  // soyisim i�in dizgi (string) kullanmak mant�kl�
    int yas;
    int seviye;
};

struct equipe {
    char isim[10];
    struct oyuncu oyuncu1;
    struct oyuncu oyuncu2;
};

void oyuncuyu_olustur(struct oyuncu *j) {
    printf("Ismi giriniz: ");
    scanf("%s", j->soyisim);  // soyisim do�ru �ekilde al�nd�
    printf("Soyismi giriniz: ");
    scanf("%s", j->soyisim);
    printf("Yasi giriniz: ");
    scanf("%d", &j->yas);
    printf("Seviyeyi giriniz: ");
    scanf("%d", &j->seviye);
}

void ekip_olustur(struct equipe *e) {
    printf("Ekibin adini giriniz: ");
    scanf("%s", e->isim);
    printf("1. Oyuncu:\n");
    oyuncuyu_olustur(&e->oyuncu1);
    printf("2. Oyuncu:\n");
    oyuncuyu_olustur(&e->oyuncu2);
}

void ekibi_bas(struct equipe e) {
    printf("Isim: %s\n", e.isim);
    printf("Oyuncu 1: \n");
    oyuncuyu_bas(e.oyuncu1);
    printf("Oyuncu 2: \n");
    oyuncuyu_bas(e.oyuncu2);
}

void oyuncuyu_bas(struct oyuncu j) {
    printf("Isim: %s\n", j.soyisim);  // soyisim do�ru �ekilde bas�ld�
    printf("Soyisim: %s\n", j.soyisim);  // soyisim do�ru �ekilde bas�ld�
    printf("Yas: %d\n", j.yas);
    printf("Seviye: %d\n", j.seviye);
}

int main() {
    struct equipe tab[N];
    int i;
    for (i = 0; i < N; i++) {
        printf("Ekip %d\n", i + 1);  // ekip numaras�n� 1'den ba�latmak daha anlaml� olur
        ekip_olustur(&tab[i]);
    }
    for (i = 0; i < N; i++) {
        printf("Ekip %d\n", i + 1);
        ekibi_bas(tab[i]);
    }
    return 0;
}
