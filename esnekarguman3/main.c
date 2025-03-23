#include <stdio.h>
#include <stdlib.h>
#include <math.h> // sqrt ve pow fonksiyonlar� i�in gerekli

void mesafeler(int n, ...) {
    int nokta[100][2]; // En fazla 100 nokta i�in i�lem yap�l�r, her nokta i�in 2 koordinat
    va_list liste;
    va_start(liste, n);

    // Noktalar� al
    for (int i = 0; i < n; i++) {
        nokta[i][0] = va_arg(liste, int); // x koordinat�
        nokta[i][1] = va_arg(liste, int); // y koordinat�
    }
    va_end(liste);

    float mes;
    // Mesafeleri hesapla
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            mes = sqrt(pow((nokta[i][0] - nokta[j][0]), 2.0) + pow((nokta[i][1] - nokta[j][1]), 2.0));
            printf("Nokta %d ile Nokta %d aras�ndaki mesafe: %.2f\n", i + 1, j + 1, mes);
        }
    }
}

int main() {
    mesafeler(2, 5, 8, -4, 9); // 2 nokta: (5,8) ve (-4,9)
    return 0;
}

