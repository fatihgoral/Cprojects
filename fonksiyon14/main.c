#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    double x=19,y=0.12,z=7.14/0.00;

    printf("%.2f degeri sonsuz bir deger %s\n",x,isfinite(x)?"degildir":"dir");
    printf("%.2f degeri sonsuz bir deger %s\n",y,isfinite(y)?"degildir":"dir");
    printf("%.2f degeri sonsuz bir deger%s\n",z,isfinite(z)?"degildir":"dir");

 /*double x = 1.0 / 0.0; // Pozitif sonsuz
    double y = -1.0 / 0.0; // Negatif sonsuz
    double z = 0.0; // Sýradan bir sayý

    if (isinf(x)) {
        printf("x sonsuzdur.\n");
    }

    if (isinf(y)) {
        printf("y sonsuzdur.\n");
    }

    if (!isinf(z)) {
        printf("z sonsuz deðildir.\n");
    }
*/

    return 0;
}
