#include <stdio.h>
#include <stdlib.h>


int asalmi(int sayi, int i) {
    if (i == 1) {
        return 1; // Asal
    } else if (sayi % i == 0) {
        return 0; // Asal deðil
    } else {
        return asalmi(sayi, i - 1); // Bir sonraki bölen
    }
}

int main() {
    int n, i, kontrol;

    printf("Lutfen bir sayi giriniz:\n");
    scanf("%d", &n);

    printf("2'den %d'e kadar olan asal sayilar:\n", n);

    for (i = 2; i <= n; i++) {
        kontrol = asalmi(i, i / 2);
        if (kontrol == 1) {
            printf("%d ", i);
        }
    }

    printf("\n");

    return 0;
}
