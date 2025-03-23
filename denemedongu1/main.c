#include <stdio.h>

int main() {
    int i, j,k;
    int sayi;

    printf("Sayi degerini giriniz: ");
    scanf("%d", &sayi);

    for (i = 1; i <= sayi; i++) {
        // Boþluklarý bas
        for (j = 1; j <= sayi - i; j++) {
            printf(" ");
        }

        // 1'den i'ye kadar sayýlarý bas
        for (k = 1; k <= i; k++) {
            printf("%d ",k );
        }

        // Yeni satýra geç
        printf("\n");
    }

    return 0;
}


