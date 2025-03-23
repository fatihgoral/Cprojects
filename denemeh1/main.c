#include <stdio.h>

int main() {
    char kar_val = 'A';  // char tipinde bir de�er
    int tam_val = 100;   // int tipinde bir de�er
    double ger_val = 200.5;  // double tipinde bir de�er

    char *kar = &kar_val;  // char g�stericisi
    int *tam = &tam_val;   // int g�stericisi
    double *ger = &ger_val;  // double g�stericisi

    // �lk durumda adresler ve de�erler
    printf("�lk durumda:\n");
    printf("kar adresi: %p, de�eri: %c\n", kar, *kar);
    printf("tam adresi: %p, de�eri: %d\n", tam, *tam);
    printf("ger adresi: %p, de�eri: %f\n", ger, *ger);

    // G�stericileri art�r
    kar++;
    tam++;
    ger++;

    // �kinci durumda adresler ve de�erler
    printf("�kinci durumda:\n");
    printf("kar adresi: %p, de�eri: %c\n", kar, *kar);
    printf("tam adresi: %p, de�eri: %d\n", tam, *tam);
    printf("ger adresi: %p, de�eri: %f\n", ger, *ger);

    return 0;
}
