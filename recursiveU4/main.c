#include <stdio.h>
#include <stdlib.h>

// Recursive fonksiyon
int hesap(int n) {
    int deger;

    if (n == 0) { // Base case: 2^0 = 1
        deger = 1;
    } else {
        deger = 2 * hesap(n - 1); // Recursive case
    }

    return deger; // Hesaplanan değeri döndür
}

int main() {
    int sayi;

    printf("Lutfen sayi degerini giriniz: ");
    scanf("%d", &sayi);

    if (sayi < 0) {
        printf("Negatif bir sayi girmeyiniz.\n");
        return 1;
    }

    printf("%d'ye kadar olan 2'nin kuvvetleri:\n", sayi);

    for (int i = 0; i <= sayi; i++) {
        printf("2^%d = %d\n", i, hesap(i)); // Her kuvvet için hesapla ve yazdır
    }

    return 0;
}
