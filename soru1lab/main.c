#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b,c,t;

    printf("A muslugu havuzu kac saate doldurur: ");
    scanf("%f",&a);
    printf("B muslugu havuzu kac saate doldurur: ");
    scanf("%f",&b);
    printf("C muslugu havuzu kac saate doldurur: ");
    scanf("%f",&c);
    t=1/(1/a+1/b+1/c);
    printf("havuzu tek basina sirasiyla %.1f , %.1f %.1f saate dolduran uc musluk ucu birden acilirsa havuz %.1f saate doldurur",a,b,c,t);
    return 0;
}
