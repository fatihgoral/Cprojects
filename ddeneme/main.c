#include <stdio.h>
#include <string.h>

int main() {
    char metin1[] = "elma";
    char metin2[] = "armut";
    char metin3[] = "elma";

    // metin1 ve metin2'yi karşılaştır
    int sonuc1 = strcmp(metin1, metin2);
    // metin1 ve metin3'ü karşılaştır
    int sonuc2 = strcmp(metin1, metin3);

    if (sonuc1 < 0) {
        printf("'%s' '%s' den önce gelir.\n", metin1, metin2);
    } else if (sonuc1 > 0) {
        printf("'%s' '%s' den sonra gelir.\n", metin1, metin2);
    } else {
        printf("'%s' ve '%s' eşittir.\n", metin1, metin2);
    }

    if (sonuc2 == 0) {
        printf("'%s' ve '%s' eşittir.\n", metin1, metin3);
    }

    return 0;
}
