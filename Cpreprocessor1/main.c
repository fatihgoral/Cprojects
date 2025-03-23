#include <stdio.h>

#define PI 3.14
#define circleArea(r) (PI * (r) * (r)) // Daire alaný hesaplama makrosu

int main() {
    float radius, area;


    printf("Dairenin yaricapini girin: ");
    scanf("%f", &radius);

    area = circleArea(radius);


    printf("Dairenin alani: %.2f\n", area);

    return 0;
}

