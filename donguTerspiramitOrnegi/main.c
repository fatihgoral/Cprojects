#include <stdio.h>

int main() {
    int n, i, j;

    printf("Satir sayisini girin: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        // Sat�r ba��ndaki bo�luklar� yazd�r
        for (j = 0; j < i; j++) {
            printf(" ");
        }

        // Y�ld�zlar� yazd�r
        for (j = 0; j < 2 * (n - i) - 1; j++) {
            printf("*");
        }

        printf("\n"); // Sat�r sonu
    }

    return 0;
}
