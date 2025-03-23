#include <stdio.h>
#include <stdarg.h>

double islemFonksiyonu(char islem, int sayiAdedi, ...) {
    va_list liste;
    va_start(liste, sayiAdedi);

    double sonucDegeri = (islem == '+') ? 0 : 1;
    for (int i = 0; i < sayiAdedi; i++) {
        double girdiSayi = va_arg(liste, double);
        if (islem == '+') {
            sonucDegeri += girdiSayi;
        } else if (islem == '*') {
            sonucDegeri *= girdiSayi;
        }
    }
    va_end(liste);
    return sonucDegeri;
}

int main() {
    double sonucToplam = islemFonksiyonu('+', 3, 4.5, 1.2, 5.2);
    double sonucCarpim = islemFonksiyonu('*', 3, 4.5, 1.2, 5.2);

    printf("Toplam: %.2f\n", sonucToplam);
    printf("Çarpim: %.2f\n", sonucCarpim);

    return 0;
}
