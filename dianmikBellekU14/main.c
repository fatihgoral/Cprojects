#include <stdio.h>
#include <stdlib.h>

// Fonksiyon: Sabit boyutlu matris yazd�rma
void matris_yazdir(int satir, int sutun, int M[satir][sutun]) {
    for (int i = 0; i < satir; i++) {
        for (int j = 0; j < sutun; j++) {
            printf("%d ", M[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

// Fonksiyon: Dinamik matris yazd�rma
void matris_yazdir2(int satir, int sutun, int **M2) {
    for (int i = 0; i < satir; i++) {
        for (int j = 0; j < sutun; j++) {
            printf("%d ", M2[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

int main() {
    int satir = 3;
    int sutun = 4;

    // Sabit boyutlu matris
    int M[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    matris_yazdir(satir, sutun, M);

    // Dinamik matris olu�turma
    int **M2 = (int **)malloc(satir * sizeof(int *));
    for (int i = 0; i < satir; i++) {
        M2[i] = (int *)malloc(sutun * sizeof(int));
    }
01
    // Dinamik matrise de�er atama
    int sayac = 1;
    for (int i = 0; i < satir; i++) {
        for (int j = 0; j < sutun; j++) {
            M2[i][j] = sayac++;
        }
    }

    // Matrisin s�tun say�s�n� art�rma
    for (int i = 0; i < satir; i++) {
        M2[i] = (int *)realloc(M2[i], (sutun + 1) * sizeof(int));
    }

    // Yeni s�tuna de�er atama
    M2[0][4] = 13;
    M2[1][4] = 14;
    M2[2][4] = 15;

    // Matrisin sat�r say�s�n� art�rma
    M2 = (int **)realloc(M2, (satir + 1) * sizeof(int *));
    M2[satir] = (int *)malloc((sutun + 1) * sizeof(int));

    // Yeni sat�ra de�er atama
    M2[3][0] = 20;
    M2[3][1] = 21;
    M2[3][2] = 22;
    M2[3][3] = 23;
    M2[3][4] = 24;

    // Dinamik matrisi yazd�rma
    matris_yazdir2(satir + 1, sutun + 1, M2);

    // Dinamik belle�i serbest b�rakma
    for (int i = 0; i < satir + 1; i++) {
        free(M2[i]);
    }
    free(M2);

    return 0;
}
