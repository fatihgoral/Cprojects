#include <stdio.h>
#include <stdlib.h>

int main() {
    int m1, m2, m3, m4;
    float dolumhizi = 0, azalimhizi = 0;

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

    printf("3. muslugu girin: ");
    scanf("%d", &m3);
    if (m3 == 0) {
        printf("0 degeri giremezsiniz\n");
        return 0;
    }

    printf("4. muslugu girin: ");
    scanf("%d", &m4);
    if (m4 == 0) {
        printf("0 degeri giremezsiniz\n");
        return 0;
    }

  /*  dolumhizi += (m1 > 0) ? (1.0 / m1) : 0;
    azalimhizi += (m1 < 0) ? (1.0 / (-m1)) : 0;

    dolumhizi += (m2 > 0) ? (1.0 / m2) : 0;
    azalimhizi += (m2 < 0) ? (1.0 / (-m2)) : 0;

    dolumhizi += (m3 > 0) ? (1.0 / m3) : 0;
    azalimhizi += (m3 < 0) ? (1.0 / (-m3)) : 0;

    dolumhizi += (m4 > 0) ? (1.0 / m4) : 0;
    azalimhizi += (m4 < 0) ? (1.0 / (-m4)) : 0;

    */

    dolumhizi = (m1 > 0 ? (1.0 / m1) : dolumhizi) +
                 (m2 > 0 ? (1.0 / m2) : dolumhizi) +
                 (m3 > 0 ? (1.0 / m3) : dolumhizi) +
                 (m4 > 0 ? (1.0 / m4) : dolumhizi);

    azalimhizi = (m1 < 0 ? (1.0 / (-m1)) : azalimhizi) +
                  (m2 < 0 ? (1.0 / (-m2)) : azalimhizi) +
                  (m3 < 0 ? (1.0 / (-m3)) : azalimhizi) +
                  (m4 < 0 ? (1.0 / (-m4)) : azalimhizi);


    if (dolumhizi > azalimhizi) {
        float net_speed = dolumhizi - azalimhizi;
        float filling_time = 1.0 / net_speed;
        printf("Havuz tamamen dolacak ve dolum suresi: %.2f saat.\n",filling_time);
    } else {
        printf("Havuz tamemen dolamayacak\n");
    }

    return 0;
}

