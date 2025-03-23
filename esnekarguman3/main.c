#include <stdio.h>
#include <stdlib.h>
#include <math.h> // sqrt ve pow fonksiyonlarý için gerekli

void mesafeler(int n, ...) {
    int nokta[100][2]; // En fazla 100 nokta için iþlem yapýlýr, her nokta için 2 koordinat
    va_list liste;
    va_start(liste, n);

    // Noktalarý al
    for (int i = 0; i < n; i++) {
        nokta[i][0] = va_arg(liste, int); // x koordinatý
        nokta[i][1] = va_arg(liste, int); // y koordinatý
    }
    va_end(liste);

    float mes;
    // Mesafeleri hesapla
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            mes = sqrt(pow((nokta[i][0] - nokta[j][0]), 2.0) + pow((nokta[i][1] - nokta[j][1]), 2.0));
            printf("Nokta %d ile Nokta %d arasýndaki mesafe: %.2f\n", i + 1, j + 1, mes);
        }
    }
}

int main() {
    mesafeler(2, 5, 8, -4, 9); // 2 nokta: (5,8) ve (-4,9)
    return 0;
}

