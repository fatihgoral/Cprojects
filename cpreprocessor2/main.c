#include <stdio.h>

#define rectangleArea(l, w) ((l) * (w)) // Dörtgen alaný hesaplama makrosu

int main() {
    float length, width, area;

    printf("Dörtgenin uzunluðunu girin: ");
    scanf("%f", &length);

    printf("Dörtgenin geniþliðini girin: ");
    scanf("%f", &width);

    area = rectangleArea(length, width);

    printf("Dörtgenin alaný: %.2f\n", area);

    return 0;
}
