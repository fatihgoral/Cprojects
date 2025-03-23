#include <stdio.h>
#include <stdlib.h>

int main() {
    int secim, s1, s2;
    int toplam, cikarma, carpma;
    printf("ISLEMLER:  ");
    printf("1- Toplama\n 2- Cikarma\n 3- Carpma\n 4- Bolme\n");
    printf("isleminiz icin Bir secim  yapin: ");
    scanf("%d",&secim);

    if (secim == 1) {
        printf("lutfen Iki sayi giriniz: ");
        scanf("%d %d", &s1, &s2);
        toplam = s1 + s2;
        printf("%d + %d = %d\n", s1, s2, toplam);
    }
else if (secim == 2) {
        printf("lutfen Iki sayi giriniz: ");
        scanf("%d %d", &s1, &s2);
        cikarma = s1 - s2;
        printf("%d - %d = %d\n", s1, s2, cikarma);
    }
else if (secim == 3) {
        printf("lutfen Iki sayi giriniz: ");
        scanf("%d %d", &s1, &s2);
        carpma = s1 * s2;
        printf("%d * %d = %d\n", s1, s2, carpma);
    }
else if (secim == 4) {
        printf("lutfen Iki sayi giriniz: ");
        scanf("%d %d", &s1, &s2);
if (s2 == 0) {
            printf("Payda sifir olamaz gecersiz islem yapildi\n");
} else {
            printf("%d / %d = %.2f\n", s1, s2, (float)s1 / s2);
        }
    }
    else {
        printf("Hatali giris yapildi lutfen daha sonra tekrar deneyiniz iyi gunler\n");
    }

    return 0;
}
