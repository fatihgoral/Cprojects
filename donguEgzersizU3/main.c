#include <stdio.h>
#include <stdlib.h>

int main() {
    int sayi;

    printf("Lutfen pozitif bir deger girin: ");
    scanf("%d", &sayi);

    // Pozitif sayý girilene kadar kullanýcýdan giriþ al
    while (sayi <= 0) {
        printf("Lutfen pozitif bir deger girin: ");
        scanf("%d", &sayi);
    }

    // Geri sayým yaparak ekrana bastýr
    while (sayi != 0) {
        printf("%d\n", sayi);
        sayi--;
    }

    return 0;
}
