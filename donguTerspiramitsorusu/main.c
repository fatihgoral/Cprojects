
#include <stdio.h>

int main() {
    int i, j, k;
    int sayi;

    printf("Sayi degerini giriniz: ");
    scanf("%d", &sayi);

    for (i = sayi; i >= 1; i--) {
        // Bo�luklar� bas
        for (j = 1; j <= sayi - i; j++) {
            printf("  ");  // �ift bo�luk ile ��geni ortala
        }

        // 1'den (2*i - 1)'e kadar say�lar� bas
        for (k = 1; k <= (2 * i - 1); k++) {
            printf("%d ", k);
        }

        // Yeni sat�ra ge�
        printf("\n");
    }

    return 0;
}
