#include <stdio.h>
#include <stdlib.h>
// derece=(fahrenheit-32)*5/9;
// fahrenheit derece tipiden degeri santigrat ölcegine donusturun
int main()
{
    float santig;
    int fahren;

    printf("lutfen fahrenheit degerini giriniz: ");
    scanf("%d",&fahren);
    santig=(fahren-32)*5/9;
    printf("santigrat derece degeri: %.2f",santig);





    return 0;
}
