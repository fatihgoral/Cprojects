#include <stdio.h>
#include <stdlib.h>

int main() {
    int secim, s1, s2;
    int sonuc;

    printf("ISLEMLER:  ");
    printf("1- Toplama\n 2- Cikarma\n 3- Carpma\n 4- Bolme\n");
    printf("Isleminiz icin bir secim yapin: ");
    scanf("%d", &secim);

    (secim >= 1 && secim <= 4) ? (
        printf("Lutfen iki sayi giriniz: "),
        scanf("%d %d", &s1, &s2),
        secim == 1 ? (sonuc = s1 + s2, printf("%d + %d = %d\n", s1, s2, sonuc)) :
        secim == 2 ? (sonuc = s1 - s2, printf("%d - %d = %d\n", s1, s2, sonuc)) :
        secim == 3 ? (sonuc = s1 * s2, printf("%d * %d = %d\n", s1, s2, sonuc)) :
        (s2 != 0 ? (printf("%d / %d = %.2f\n", s1, s2, (float)s1 / s2)) : printf("Payda sifir olamaz, gecersiz islem yapildi\n"))
    ) :
    printf("Hatali giris yapildi, lutfen daha sonra tekrar deneyiniz. Iyi gunler!\n");

    return 0;
}

