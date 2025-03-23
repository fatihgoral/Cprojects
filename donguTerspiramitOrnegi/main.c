#include <stdio.h>

int main() {
    int n, i, j;

    printf("Satir sayisini girin: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        // Satýr baþýndaki boþluklarý yazdýr
        for (j = 0; j < i; j++) {
            printf(" ");
        }

        // Yýldýzlarý yazdýr
        for (j = 0; j < 2 * (n - i) - 1; j++) {
            printf("*");
        }

        printf("\n"); // Satýr sonu
    }

    return 0;
}
