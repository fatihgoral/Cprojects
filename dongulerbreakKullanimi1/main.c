#include <stdio.h>
#include <string.h>

int main() {
    char sifre[20];
    char dogruSifre[] = "sifre123";

    while (1) {
        printf("sifre giriniz: ");
        scanf("%s", sifre);
        if (strcmp(sifre, dogruSifre) == 0) {
            printf("sifre dogru, hos geldiniz!\n");
            break; // Þifre doðru girilince döngüden çýkýlýr
        } else {
            printf("Yanlis sifre, tekrar deneyiniz.\n");
        }
    }
    return 0;
}

