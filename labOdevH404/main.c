#include <stdio.h>
#include <stdlib.h>

int main() {
    int secim, s1, s2;
    int toplam, cikarma, carpma;
 printf("ISLEMLER:  ");
    printf("1- Toplama\n 2- Cikarma\n 3- Carpma\n 4- Bolme\n");
    scanf("%d", &secim);

    switch (secim) {
    case 1:
            printf("Lutfen iki sayi giriniz: ");
            scanf("%d %d", &s1, &s2);
            toplam = s1 + s2;
            printf("%d + %d = %d\n", s1, s2, toplam);
            break;

    case 2:
            printf("Lutfen iki sayi giriniz: ");
            scanf("%d %d", &s1, &s2);
            cikarma = s1 - s2;
            printf("%d - %d = %d\n", s1, s2, cikarma);
            break;

    case 3:
            printf("Lutfen iki sayi giriniz: ");
            scanf("%d %d", &s1, &s2);
            carpma = s1 * s2;
            printf("%d * %d = %d\n", s1, s2, carpma);
            break;

    case 4:
            printf("Lutfen iki sayi giriniz: ");
            scanf("%d %d", &s1, &s2);
            if (s2 == 0) {
                printf("Payda sifir olamaz, gecersiz islem yapildi\n");
            } else {
                printf("%d / %d = %.2f\n", s1, s2, (float)s1 / s2);
            }
            break;

    default:
            printf("Hatali giris yapildi lutfen daha sonra tekrar deneyiniz. Iyi gunler!\n");
            break;
    }

    return 0;
}
