#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    printf("yuvarlanmis hali :%f\n",ceil(4.2));
    printf("yuvarlanmis hali : %f\nn",ceil(4.9));

    printf("yuvarlanmis hali :%f\n",floor(4.2));
    printf("yuvarlanmis hali : %f\n",floor(4.9));

    printf("karekok sonucu: %f\n",sqrt(49));
    printf("karekok sonucu: %f\n",sqrt(100));

    printf("kare islemi sonucu: %f\n",pow(4,2));
    printf("uslu ifade sonucu: %f\n",pow(2,3));
    printf("uslu ifade sonucu: %f\n",pow(3,4));

    printf("mutlak degersonucu: %d\n",abs(-49));
    printf("mutlak deger sonucu: %d\n",abs(10));
    // abs fonksiyonu özelligi sadece int deger türünden ifadelerin mutlak dgerini alir
    return 0;
}
