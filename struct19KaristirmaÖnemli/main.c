#include <stdio.h>

typedef struct karmasik_sayi
{
    float reel;
    float sanal;
} karmasik;

// �ki karma��k say�y� toplamak i�in fonksiyon
karmasik toplama(karmasik k1, karmasik k2) {
    karmasik sonuc;
    sonuc.reel = k1.reel + k2.reel;
    sonuc.sanal = k1.sanal + k2.sanal;
    return sonuc;
}

// �ki karma��k say�y� ��karmak i�in fonksiyon
karmasik cikarma(karmasik k1, karmasik k2) {
    karmasik sonuc;
    sonuc.reel = k1.reel - k2.reel;
    sonuc.sanal = k1.sanal - k2.sanal;
    return sonuc;
}

// Karma��k say�y� ekrana yazd�rmak i�in fonksiyon
void yazdir(karmasik k) {
    printf("%.2f", k.reel);
    if (k.sanal >= 0) {
        printf(" + %.2f i\n", k.sanal);
    } else {
        printf(" %.2f i\n", k.sanal);
    }
}

int main() {
    karmasik k1, k2, sonuc;
    char oper;

    // Kullan�c�dan iki karma��k say�y� ve i�lemi al
    printf("Lutfen birinci karmasik sayiyi giriniz (reel ve sanal kismini): ");
    scanf("%f %f", &k1.reel, &k1.sanal);

    printf("Lutfen ikinci karmasik sayiyi giriniz (reel ve sanal kismini): ");
    scanf("%f %f", &k2.reel, &k2.sanal);

    printf("Lutfen yapmak istediginiz islemi seciniz (+ veya - olmali): ");
    scanf(" %c", &oper);

    // Toplama veya ��karma i�lemi yap
    if (oper == '+') {
        sonuc = toplama(k1, k2);
        printf("Toplama islemi sonucu: ");
    } else if (oper == '-') {
        sonuc = cikarma(k1, k2);
        printf("Cikarma islemi sonucu: ");
    } else {
        printf("Gecersiz operator girdiniz!\n");
        return 1; // Program� hata ile sonland�r
    }

    // Sonucu ekrana yazd�r
    yazdir(sonuc);

    return 0;
}
