
#include <stdio.h>

int main() {
    int i, j, k;
    int sayi;

    printf("Sayi degerini giriniz: ");
    scanf("%d", &sayi);

    for (i = sayi; i >= 1; i--) {
        // Boþluklarý bas
        for (j = 1; j <= sayi - i; j++) {
            printf("  ");  // Çift boþluk ile üçgeni ortala
        }

        // 1'den (2*i - 1)'e kadar sayýlarý bas
        for (k = 1; k <= (2 * i - 1); k++) {
            printf("%d ", k);
        }

        // Yeni satýra geç
        printf("\n");
    }

    return 0;
}
