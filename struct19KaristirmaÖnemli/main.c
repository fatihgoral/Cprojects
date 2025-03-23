#include <stdio.h>

typedef struct karmasik_sayi
{
    float reel;
    float sanal;
} karmasik;

// Ýki karmaþýk sayýyý toplamak için fonksiyon
karmasik toplama(karmasik k1, karmasik k2) {
    karmasik sonuc;
    sonuc.reel = k1.reel + k2.reel;
    sonuc.sanal = k1.sanal + k2.sanal;
    return sonuc;
}

// Ýki karmaþýk sayýyý çýkarmak için fonksiyon
karmasik cikarma(karmasik k1, karmasik k2) {
    karmasik sonuc;
    sonuc.reel = k1.reel - k2.reel;
    sonuc.sanal = k1.sanal - k2.sanal;
    return sonuc;
}

// Karmaþýk sayýyý ekrana yazdýrmak için fonksiyon
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

    // Kullanýcýdan iki karmaþýk sayýyý ve iþlemi al
    printf("Lutfen birinci karmasik sayiyi giriniz (reel ve sanal kismini): ");
    scanf("%f %f", &k1.reel, &k1.sanal);

    printf("Lutfen ikinci karmasik sayiyi giriniz (reel ve sanal kismini): ");
    scanf("%f %f", &k2.reel, &k2.sanal);

    printf("Lutfen yapmak istediginiz islemi seciniz (+ veya - olmali): ");
    scanf(" %c", &oper);

    // Toplama veya çýkarma iþlemi yap
    if (oper == '+') {
        sonuc = toplama(k1, k2);
        printf("Toplama islemi sonucu: ");
    } else if (oper == '-') {
        sonuc = cikarma(k1, k2);
        printf("Cikarma islemi sonucu: ");
    } else {
        printf("Gecersiz operator girdiniz!\n");
        return 1; // Programý hata ile sonlandýr
    }

    // Sonucu ekrana yazdýr
    yazdir(sonuc);

    return 0;
}
