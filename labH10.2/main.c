#include <stdio.h>
#include <stdarg.h>
#include <string.h>

void karakterSayaci(const char *metin, int sayacAdedi, ...) {
    printf("Metin: \"%s\"\n", metin);
    printf("Harf Sayilari:\n");

    va_list argumanlar;
    va_start(argumanlar, sayacAdedi);

    for (int i = 0; i < sayacAdedi; i++) {
        char harf = va_arg(argumanlar, int);
        int sayac = 0;

        for (int j = 0; j < strlen(metin); j++) {
            if (metin[j] == harf) {
                sayac++;
            }
        }

        printf("Harf '%c': %d kez bulundu.\n", harf, sayac);
    }

    va_end(argumanlar);
    printf("\n");
}

int main() {
    karakterSayaci("Bugun Galatasarayin maci var.", 3, 'G', 'a', 's');
    karakterSayaci("Algoritma mantigi oturuyor.", 4, 'a', 'l', 'o', 'r');
    karakterSayaci("Lab odevini yapacagim.", 2, 'a', 'e');

    return 0;
}


