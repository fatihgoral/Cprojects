
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
    printf("L�tfen bir say� giriniz:\n");
    scanf("%d", &sayi);

    if (kat2(sayi) == 1 && kat3(sayi) == 1) {
        printf("Say�n�z 6'ya b�l�n�r.\n");
    } else if (kat2(sayi) == 1) {
        printf("Say�n�z 2 ile b�l�nebilen bir say�d�r.\n");
    } else if (kat3(sayi) == 1) {
        printf("Say�n�z 3 ile b�l�nebilen bir say�d�r.\n");
    } else {
        printf("sayiniz hem 2 ye hem de 3 bolunmez\n");
    }

    return 0;
}
