#include <stdio.h>

/*
 * ile aþaðýdaki þekli çizen program
 *
 *       *
 *     * * *
 *   * * * * *
 */

int main() {
    int satir, i, k, bosluk;

    printf("Lütfen satýr sayýsýný giriniz: ");
    scanf("%d", &satir);

    for (i = 1; i <= satir; i++) { // Dýþ döngü: satýrlarý kontrol eder
        // Boþluklarý yazdýrma
        for (bosluk = 1; bosluk <= satir - i; bosluk++) {
            printf("  "); // Her satýrda baþta boþluk býrakýr
        }

        // Yýldýzlarý yazdýrma
        for (k = 1; k <= (2 * i - 1); k++) {
            printf("* "); // Yýldýzlarý yazdýr
        }

        printf("\n"); // Satýr sonu
    }

    return 0;
}
