#include <stdio.h>

int main() {
    int satir1, sutun1, satir2, sutun2;
    printf("1. matrisin satir sayisini girin: ");
    scanf("%d", &satir1);
    printf("1. matrisin sutun sayisini girin: ");
    scanf("%d", &sutun1);

    printf("2. matrisin satir sayisini girin: ");
    scanf("%d", &satir2);
    printf("2. matrisin sutun sayisini girin: ");
    scanf("%d", &sutun2);

    if (sutun1 != satir2) {
        printf("Matrisler carpilamaz! 1. matrisin sutun sayisi 2. matrisin satir sayisina esit olmali.\n");
        return 1;
    }

    int matris1[satir1][sutun1], matris2[satir2][sutun2], sonuc[satir1][sutun2];

    printf("1. matrisin elemanlarini girin:\n");
    for (int i = 0; i < satir1; i++) {
        for (int j = 0; j < sutun1; j++) {
            printf("matris1[%d][%d]: ", i, j);
            scanf("%d", &matris1[i][j]);
        }
    }

    printf("2. matrisin elemanlarini girin:\n");
    for (int i = 0; i < satir2; i++) {
        for (int j = 0; sj < sutun2; j++) {
            printf("matris2[%d][%d]: ", i, j);
            scanf("%d", &matris2[i][j]);
        }
    }

    // Sonuç matrisini sýfýrla
    for (int i = 0; i < satir1; i++) {
        for (int j = 0; j < sutun2; j++) {
            sonuc[i][j] = 0;
        }
    }

    // Matris çarpýmý iþlemi
    for (int i = 0; i < satir1; i++) {
        for (int j = 0; j < sutun2; j++) {
            for (int k = 0; k < sutun1; k++) {
                sonuc[i][j] += matris1[i][k] * matris2[k][j];
            }
        }
    }

    printf("Carpim sonucu matris:\n");
    for (int i = 0; i < satir1; i++) {
        for (int j = 0; j < sutun2; j++) {
            printf("%d ", sonuc[i][j]);
        }
        printf("\n");
    }

    return 0;
}
