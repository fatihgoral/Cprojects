#include <stdio.h>
#include <stdlib.h>

int main()
{
    // strupr fonksþyon
    // kucuk harfleri buyuk harfe cevirme
    char karakter[25];
        printf("karakter giriniz :");
    scanf("%s",karakter);
    printf("buyuk harfli : %s",strupr(karakter));
    return 0;
}
