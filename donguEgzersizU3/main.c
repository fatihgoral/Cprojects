#include <stdio.h>
#include <stdlib.h>

int main() {
    int sayi;

    printf("Lutfen pozitif bir deger girin: ");
    scanf("%d", &sayi);

    // Pozitif say� girilene kadar kullan�c�dan giri� al
    while (sayi <= 0) {
        printf("Lutfen pozitif bir deger girin: ");
        scanf("%d", &sayi);
    }

    // Geri say�m yaparak ekrana bast�r
    while (sayi != 0) {
        printf("%d\n", sayi);
        sayi--;
    }

    return 0;
}
