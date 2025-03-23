#include <stdio.h>
#include <string.h>  // strcpy fonksiyonunu kullanabilmek i�in kesinlikle olmalidir

struct ogrenci {
    char ad[20];
    char soyad[20];
    int yas;
};

int main() {
    // 1. Y�ntem: Do�rudan Atama
    struct ogrenci fth1 = {"fatih", "can", 27};

    //bunu yapabilmemeizin sebebi :struct ile toplu bir sekilde ilk deger atmas�na izin verilmesidir.bus sayede
    // dogrudan ilk dger atamasi yapabildik

    printf("1. Y�ntem - Do�rudan Atama:\n");
    printf("Ad: %s\n", fth1.ad);
    printf("Soyad: %s\n", fth1.soyad);
    printf("Yas: %d\n", fth1.yas);

    // 2. Y�ntem: Elemanlara Tek Tek Atama
    struct ogrenci fth2;
    strcpy(fth2.ad, "fatih");
    strcpy(fth2.soyad, "can");
    fth2.yas = 27;

    printf("\n2. Y�ntem - Elemanlara Tek Tek Atama:\n");
    printf("Ad: %s\n", fth2.ad);
    printf("Soyad: %s\n", fth2.soyad);
    printf("Yas: %d\n", fth2.yas);

    return 0;
}
