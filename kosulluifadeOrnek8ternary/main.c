#include <stdio.h>
#include <stdlib.h>

int main() {
    int anaSecim;
    int detaySecim;

    printf("L�tfen yiyecek istiyorsan�z 1, i�ecek istiyorsan�z 2'ye bas�n�z:\n");
    scanf("%d", &anaSecim);

    (anaSecim == 1) ? (
        printf("L�tfen detayl� se�imi 1 ile 3 aras�ndaki rakamlardan se�erek yap�n�z:\n"),
        printf("1 numarada hamburger, 2 numarada kebap, 3 numarada tavuk d�ner vard�r.\n"),
        scanf("%d", &detaySecim),
        (detaySecim == 1) ? printf("Hamburger se�tiniz:\n") :
        (detaySecim == 2) ? printf("Kebap se�tiniz:\n") :
        (detaySecim == 3) ? printf("Tavuk d�ner se�tiniz:\n") :
        printf("Hatal� se�im yapt�n�z.\n")
    ) : (anaSecim == 2) ? (
        printf("L�tfen detayl� se�imi 1 ile 3 aras�ndaki rakamlardan se�erek yap�n�z:\n"),
        printf("1 numarada ayran, 2 numarada kahve, 3 numarada gazoz vard�r.\n"),
        scanf("%d", &detaySecim),
        (detaySecim == 1) ? printf("Ayran se�tiniz:\n") :
        (detaySecim == 2) ? printf("Kahve se�tiniz:\n") :
        (detaySecim == 3) ? printf("Gazoz se�tiniz:\n") :
        printf("Hatal� se�im yapt�n�z.\n")
    ) : printf("Hatal� se�im yapt�n�z.\n");

    return 0;
}



