#include <stdio.h>
#include <stdlib.h>

float exponentiation(float x, int y) {
    float result = 1;
    int i;

    // Eðer üs negatifse
    if (y < 0) {
        for (i = 0; i < -y; i++) {
            result *= 1 / x;
        }
    } else {
        // Eðer üs pozitifse
        for (i = 0; i < y; i++) {
            result *= x;
        }
    }
    return result;
}

int main() {
    float base;
    int exponent;

    printf("Taban sayýyý girin: ");
    scanf("%f", &base);
    printf("Üssü girin: ");
    scanf("%d", &exponent);

    printf("%.2f üssü %d = %.6f\n", base, exponent, exponentiation(base, exponent));

    return 0;
}
