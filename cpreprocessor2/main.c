#include <stdio.h>

#define rectangleArea(l, w) ((l) * (w)) // D�rtgen alan� hesaplama makrosu

int main() {
    float length, width, area;

    printf("D�rtgenin uzunlu�unu girin: ");
    scanf("%f", &length);

    printf("D�rtgenin geni�li�ini girin: ");
    scanf("%f", &width);

    area = rectangleArea(length, width);

    printf("D�rtgenin alan�: %.2f\n", area);

    return 0;
}
