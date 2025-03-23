
#include <stdio.h>
#include <stdlib.h>

int kat2(int n) {
    if (n % 2 == 0) {
        return 1;
    } else {
        return 0;
    }
}

int kat3(int n) {
    if (n % 3 == 0) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int sayi;
    printf("Lütfen bir sayý giriniz:\n");
    scanf("%d", &sayi);

    if (kat2(sayi) == 1 && kat3(sayi) == 1) {
        printf("Sayýnýz 6'ya bölünür.\n");
    } else if (kat2(sayi) == 1) {
        printf("Sayýnýz 2 ile bölünebilen bir sayýdýr.\n");
    } else if (kat3(sayi) == 1) {
        printf("Sayýnýz 3 ile bölünebilen bir sayýdýr.\n");
    } else {
        printf("sayiniz hem 2 ye hem de 3 bolunmez\n");
    }

    return 0;
}
