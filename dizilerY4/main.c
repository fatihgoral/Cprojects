#include <stdio.h>

int main() {
    int n, i, j;

    // Matris boyutunu al
    printf("Matrisin boyutunu giriniz (n x n): ");
    scanf("%d", &n);

    int matris[n][n];

    // Matris elemanlar�n� al
    printf("Matris elemanlarini giriniz:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("Eleman [%d][%d]: ", i, j);
            scanf("%d", &matris[i][j]);
        }
    }

    // Maj�r ve min�r k��egen elemanlar�n� 1 yap
    for (i = 0; i < n; i++) {
        matris[i][i] = 1;           // Maj�r k��egen i�in i == j
        matris[i][n - 1 - i] = 1;   // Min�r k��egen i�in i + j == n - 1
    }

    // Sonucu ekrana yazd�r
    printf("\nMatrisin Maj�r ve Min�r K��egenlerine 1 Atand�:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", matris[i][j]);
        }
        printf("\n");
    }

    return 0;
}
