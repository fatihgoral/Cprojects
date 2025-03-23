#include <stdio.h>

int main() {
    int n, i, j;

    // Matris boyutunu al
    printf("Matrisin boyutunu giriniz (n x n): ");
    scanf("%d", &n);

    int matris[n][n];

    // Matris elemanlarýný al
    printf("Matris elemanlarini giriniz:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("Eleman [%d][%d]: ", i, j);
            scanf("%d", &matris[i][j]);
        }
    }

    // Majör ve minör köþegen elemanlarýný 1 yap
    for (i = 0; i < n; i++) {
        matris[i][i] = 1;           // Majör köþegen için i == j
        matris[i][n - 1 - i] = 1;   // Minör köþegen için i + j == n - 1
    }

    // Sonucu ekrana yazdýr
    printf("\nMatrisin Majör ve Minör Köþegenlerine 1 Atandý:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", matris[i][j]);
        }
        printf("\n");
    }

    return 0;
}
