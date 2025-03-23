#include <stdio.h>

int main() {
    int n, j, temp;

    // Eleman sayýsýný al
    printf("Dizinin eleman sayisini giriniz: ");
    scanf("%d", &n);

    int dizi[n];

    // Elemanlarý al
    printf("Dizinin elemanlarini giriniz:\n");
    for (int i = 0; i < n; i++) {
        printf("Eleman %d: ", i + 1);
        scanf("%d", &dizi[i]);
    }

    // Küçükten büyüðe sýralama
    for (j = 0; j < n - 1; j++) { // Burada sadece j'yi kullanarak sýralama yapýyoruz
        for (int k = 0; k < n - 1 - j; k++) {
            if (dizi[k] > dizi[k + 1]) {
                temp = dizi[k];
                dizi[k] = dizi[k + 1];
                dizi[k + 1] = temp;
            }
        }
    }

    // Küçükten büyüðe sýralý diziyi ekrana yazdýr
    printf("\nDizi elemanlari kucukten buyuge sirali:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", dizi[i]);
    }

    // Büyükten küçüðe sýralý diziyi ekrana yazdýr
    printf("\nDizi elemanlari buyukten kucuge sirali:\n");
    for (int i = n - 1; i >= 0; i--) {
        printf("%d ", dizi[i]);
    }

    return 0;
}
