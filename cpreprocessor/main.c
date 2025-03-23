#include <stdio.h>

#define triangleArea(b, h) (0.5 * (b) * (h)) // Üçgen alaný hesaplama makrosu

int main() {
    float base, height, area;

    printf("Üçgenin taban uzunluðunu girin: ");
    scanf("%f", &base);

    printf("Üçgenin yüksekliðini girin: ");
    scanf("%f", &height);

    area = triangleArea(base, height);

    printf("Üçgenin alaný: %.2f\n", area);

    return 0;
}

