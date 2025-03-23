#include <stdio.h>
#include <stdlib.h>

void faktoriyelHesapla(int *giris, int *sonuc) {
    int i;
    *sonuc = 1;

    for (i = 1; i <= *giris; i++) {
        *sonuc *= i;
    }
}

int main() {
    int sayi, sonuc;
    int *sayiPtr = &sayi;


    printf("Pozitif bir tam sayi giriniz: ");
    scanf("%d", sayiPtr);

    if (*sayiPtr < 0) {
        printf("Hata: Negatif sayi girilemez!\n");
        return 1;
    }
    faktoriyelHesapla(sayiPtr, &sonuc);
    printf("%d! = %d\n", *sayiPtr, sonuc);

    return 0;
}

