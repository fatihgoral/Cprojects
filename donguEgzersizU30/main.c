#include <stdio.h>

/*
 * ile a�a��daki �ekli �izen program
 *
 *       *
 *     * * *
 *   * * * * *
 */

int main() {
    int satir, i, k, bosluk;

    printf("L�tfen sat�r say�s�n� giriniz: ");
    scanf("%d", &satir);

    for (i = 1; i <= satir; i++) { // D�� d�ng�: sat�rlar� kontrol eder
        // Bo�luklar� yazd�rma
        for (bosluk = 1; bosluk <= satir - i; bosluk++) {
            printf("  "); // Her sat�rda ba�ta bo�luk b�rak�r
        }

        // Y�ld�zlar� yazd�rma
        for (k = 1; k <= (2 * i - 1); k++) {
            printf("* "); // Y�ld�zlar� yazd�r
        }

        printf("\n"); // Sat�r sonu
    }

    return 0;
}
