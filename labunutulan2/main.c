#include <stdio.h>
#include <stdarg.h>

void yazIsimleri(int adet, ...) {
    va_list liste;
    va_start(liste, adet);

    for (int i = 0; i < adet; i++) {
        char* isim = va_arg(liste, char*);
        printf("Kisi: %s\n", isim);
    }

    va_end(liste);
}

int main() {
    yazIsimleri(3, "Kaan", "Zeynep", "Baran");
    return 0;
}
