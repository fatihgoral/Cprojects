#include <stdio.h>

#define triangleArea(b, h) (0.5 * (b) * (h)) // ��gen alan� hesaplama makrosu

int main() {
    float base, height, area;

    printf("��genin taban uzunlu�unu girin: ");
    scanf("%f", &base);

    printf("��genin y�ksekli�ini girin: ");
    scanf("%f", &height);

    area = triangleArea(base, height);

    printf("��genin alan�: %.2f\n", area);

    return 0;
}

