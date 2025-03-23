#include <stdio.h>
#include <stdlib.h>

float exponentiation(float x, int y) {
    float result = 1;
    int i;

    // E�er �s negatifse
    if (y < 0) {
        for (i = 0; i < -y; i++) {
            result *= 1 / x;
        }
    } else {
        // E�er �s pozitifse
        for (i = 0; i < y; i++) {
            result *= x;
        }
    }
    return result;
}

int main() {
    float base;
    int exponent;

    printf("Taban say�y� girin: ");
    scanf("%f", &base);
    printf("�ss� girin: ");
    scanf("%d", &exponent);

    printf("%.2f �ss� %d = %.6f\n", base, exponent, exponentiation(base, exponent));

    return 0;
}
