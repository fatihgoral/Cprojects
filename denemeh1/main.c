#include <stdio.h>

int main() {
    char kar_val = 'A';  // char tipinde bir değer
    int tam_val = 100;   // int tipinde bir değer
    double ger_val = 200.5;  // double tipinde bir değer

    char *kar = &kar_val;  // char göstericisi
    int *tam = &tam_val;   // int göstericisi
    double *ger = &ger_val;  // double göstericisi

    // İlk durumda adresler ve değerler
    printf("İlk durumda:\n");
    printf("kar adresi: %p, değeri: %c\n", kar, *kar);
    printf("tam adresi: %p, değeri: %d\n", tam, *tam);
    printf("ger adresi: %p, değeri: %f\n", ger, *ger);

    // Göstericileri artır
    kar++;
    tam++;
    ger++;

    // İkinci durumda adresler ve değerler
    printf("İkinci durumda:\n");
    printf("kar adresi: %p, değeri: %c\n", kar, *kar);
    printf("tam adresi: %p, değeri: %d\n", tam, *tam);
    printf("ger adresi: %p, değeri: %f\n", ger, *ger);

    return 0;
}
