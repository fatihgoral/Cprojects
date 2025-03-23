#include <stdio.h>
#include <stdlib.h>

int main() {
    int m1, m2, m3, m4;
    float total_fillingspeed = 0, total_reductionspeed = 0;


    printf("1. muslugu girin : ");
    scanf("%d", &m1);
    if (m1 == 0) {
        printf("0 degeri giremezsiniz\n");
        return 0;
    }


    printf("2. muslugu girin: ");
    scanf("%d", &m2);
    if (m2 == 0) {
        printf("0 degeri giremezsiniz\n");
        return 0;
    }


    printf("3. muslugu girin ( ");
    scanf("%d", &m3);
    if (m3 == 0) {
        printf("0 degeri giremezsiniz\n\n");
        return 0;
    }

    printf("4. muslugu girin ");
    scanf("%d", &m4);
    if (m4 == 0) {
        printf("0 degeri giremezsiniz\n");
        return 0;
    }


    total_fillingspeed += (m1 > 0) ? (1.0 / m1) : 0;
    total_reductionspeed += (m1 < 0) ? (1.0 / (-m1)) : 0;

    total_fillingspeed += (m2 > 0) ? (1.0 / m2) : 0;
    total_reductionspeed += (m2 < 0) ? (1.0 / (-m2)) : 0;

    total_fillingspeed += (m3 > 0) ? (1.0 / m3) : 0;
    total_reductionspeed += (m3 < 0) ? (1.0 / (-m3)) : 0;

    total_fillingspeed += (m4 > 0) ? (1.0 / m4) : 0;
    total_reductionspeed += (m4 < 0) ? (1.0 / (-m4)) : 0;


    if (total_fillingspeed > total_reductionspeed) {
        float total_speed = total_fillingspeed - total_reductionspeed;
        float filling_time = 1.0 / total_speed;
        printf("Havuz tamamen dolacak ve  Dolum süresi: %.2f saat.\n", filling_time);
    } else {
        printf("Havuz tamemen dolamayacak\n");
    }

    return 0;
}
