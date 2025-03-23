#include <stdio.h>
#include <stdlib.h>

int faktorhesap(int deger) {
    int result = 1;
    for (int i = 1; i <= deger; i++) {
        result *= i;
    }
    return result;
}

int main() {
    int deger;


    printf(" pozitif sayi giriniz: ");
    scanf("%d", &deger);

    if (deger < 0) {
        printf("pozitif bir sayi giriniz.\n");
    } else {
        int sonuc = faktorhesap(deger);
        printf("%d sayisinin faktoriyel sonucu: %d\n", deger, sonuc);
    }

    return 0;
}

