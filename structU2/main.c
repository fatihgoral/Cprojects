#include <stdio.h>
#include <stdlib.h>
struct nokta{
float x_ekseni;
float y_ekseni;
};

int main()
{
    struct nokta f;
    f.x_ekseni=3.14;
    f.y_ekseni=6.75;
    printf("x ekseni: %.2f  y ekseni:%.2f",f.x_ekseni,f.y_ekseni);

    return 0;
}
