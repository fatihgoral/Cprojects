#include <stdio.h>

int main() {
    int n, j, temp;

    // Eleman say�s�n� al
    printf("Dizinin eleman sayisini giriniz: ");
    scanf("%d", &n);

    int dizi[n];

    // Elemanlar� al
    printf("Dizinin elemanlarini giriniz:\n");
    for (int i = 0; i < n; i++) {
        printf("Eleman %d: ", i + 1);
        scanf("%d", &dizi[i]);
    }

    // K���kten b�y��e s�ralama
    for (j = 0; j < n - 1; j++) { // Burada sadece j'yi kullanarak s�ralama yap�yoruz
        for (int k = 0; k < n - 1 - j; k++) {
            if (dizi[k] > dizi[k + 1]) {
                temp = dizi[k];
                dizi[k] = dizi[k + 1];
                dizi[k + 1] = temp;
            }
        }
    }

    // K���kten b�y��e s�ral� diziyi ekrana yazd�r
    printf("\nDizi elemanlari kucukten buyuge sirali:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", dizi[i]);
    }

    // B�y�kten k����e s�ral� diziyi ekrana yazd�r
    printf("\nDizi elemanlari buyukten kucuge sirali:\n");
    for (int i = n - 1; i >= 0; i--) {
        printf("%d ", dizi[i]);
    }

    return 0;
}
