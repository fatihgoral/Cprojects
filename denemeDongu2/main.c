#include <stdio.h>

int main() {
    int i, j,k;
    int sayi;

    printf("Sayi degerini giriniz: ");
    scanf("%d", &sayi);

    for (i = sayi; i >= 1; i--) { // sayi'den 1'e kadar döngü
        // Boþluklarý bas
        for (j = 1; j <= sayi - i; j++) {
            printf(" "); // Her satýr için boþluk basar
        }

        // 1'den i'ye kadar sayýlarý bas
        for (k = 1; k <= i; k++) {
            printf("%d ", k); // Sayýlarý basar
        }

        // Yeni satýra geç
        printf("\n");
    }

    return 0;
}
