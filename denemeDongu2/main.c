#include <stdio.h>

int main() {
    int i, j,k;
    int sayi;

    printf("Sayi degerini giriniz: ");
    scanf("%d", &sayi);

    for (i = sayi; i >= 1; i--) { // sayi'den 1'e kadar d�ng�
        // Bo�luklar� bas
        for (j = 1; j <= sayi - i; j++) {
            printf(" "); // Her sat�r i�in bo�luk basar
        }

        // 1'den i'ye kadar say�lar� bas
        for (k = 1; k <= i; k++) {
            printf("%d ", k); // Say�lar� basar
        }

        // Yeni sat�ra ge�
        printf("\n");
    }

    return 0;
}
