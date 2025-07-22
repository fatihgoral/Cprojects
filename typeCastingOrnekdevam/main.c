#include <stdio.h>
#include <math.h>

int main() {
    int x = 7, y = 2;
    float z;
    double sonuc;

    // Tam sayı bölmesi yerine float bölme
    z = (float)x / y;

    
    sonuc = pow((double)z, 2) + sin((double)x) + sqrt((double)y);

    printf("x / y = %.2f\n", z);
    printf("Sonuç = %.4f\n", sonuc);

    return 0;
}
