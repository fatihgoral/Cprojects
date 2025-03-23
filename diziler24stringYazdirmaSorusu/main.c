#include <stdlib.h>
#include <stdio.h>
#define MAX_ISIM 100
#define MAX_ADET 50
// bu koda mutlaka geri d�n


void isimleriYazdir(char isimler[][MAX_ISIM], int n) {
    printf("\nGirilen isimler:\n");
    for (int i = 0; i < n; i++) {
        printf("%s\n", isimler[i]);
    }
}

int main() {
    int n;
    char isimler[MAX_ADET][MAX_ISIM] = {0}; // �simler dizisini s�f�rla

    printf("Kac adet isim gireceksiniz? ");
    scanf("%d", &n);

    if (n > MAX_ADET) {
        printf("En fazla %d isim girebilirsiniz.\n", MAX_ADET);
        return 1;
    }

    // �simleri al
    for (int i = 0; i < n; i++) {
        printf("Isim %d: ", i + 1);
        scanf("%s", isimler[i]);
    }

    // �simleri yazd�r
    isimleriYazdir(isimler, n);

    return 0;
}


















