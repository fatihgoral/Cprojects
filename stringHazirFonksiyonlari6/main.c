#include <stdio.h>
#include <string.h>

int main() {
    char metin1[] = "elma";
    char metin2[] = "armut";
    char metin3[] = "elma";

    // metin1 ve metin2'yi kar��la�t�r
    int sonuc1 = strcmp(metin1, metin2);
    // metin1 ve metin3'� kar��la�t�r
    int sonuc2 = strcmp(metin1, metin3);

    if (sonuc1 < 0) {
        printf("'%s' '%s' den �nce gelir.\n", metin1, metin2);
    } else if (sonuc1 > 0) {
        printf("'%s' '%s' den sonra gelir.\n", metin1, metin2);
    } else {
        printf("'%s' ve '%s' e�ittir.\n", metin1, metin2);
    }

    if (sonuc2 == 0) {
        printf("'%s' ve '%s' e�ittir.\n", metin1, metin3);
    }

    return 0;
}

