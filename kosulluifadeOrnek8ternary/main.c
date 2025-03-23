#include <stdio.h>
#include <stdlib.h>

int main() {
    int anaSecim;
    int detaySecim;

    printf("Lütfen yiyecek istiyorsanýz 1, içecek istiyorsanýz 2'ye basýnýz:\n");
    scanf("%d", &anaSecim);

    (anaSecim == 1) ? (
        printf("Lütfen detaylý seçimi 1 ile 3 arasýndaki rakamlardan seçerek yapýnýz:\n"),
        printf("1 numarada hamburger, 2 numarada kebap, 3 numarada tavuk döner vardýr.\n"),
        scanf("%d", &detaySecim),
        (detaySecim == 1) ? printf("Hamburger seçtiniz:\n") :
        (detaySecim == 2) ? printf("Kebap seçtiniz:\n") :
        (detaySecim == 3) ? printf("Tavuk döner seçtiniz:\n") :
        printf("Hatalý seçim yaptýnýz.\n")
    ) : (anaSecim == 2) ? (
        printf("Lütfen detaylý seçimi 1 ile 3 arasýndaki rakamlardan seçerek yapýnýz:\n"),
        printf("1 numarada ayran, 2 numarada kahve, 3 numarada gazoz vardýr.\n"),
        scanf("%d", &detaySecim),
        (detaySecim == 1) ? printf("Ayran seçtiniz:\n") :
        (detaySecim == 2) ? printf("Kahve seçtiniz:\n") :
        (detaySecim == 3) ? printf("Gazoz seçtiniz:\n") :
        printf("Hatalý seçim yaptýnýz.\n")
    ) : printf("Hatalý seçim yaptýnýz.\n");

    return 0;
}



