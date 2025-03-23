#include <stdio.h>
#include <stdlib.h>
// havuzun enini boyunu ve yüksekligini metre cinsinden alan ve havuzun dolmasi icin ne kadar
// suyun gerekli oldugunu bulan c programini yaziniz

int main()
{
    float en,boy,yukseklik;
    float hacim;

    printf("lutfen havuzun enini boyunu ve yuksekligini giriniz:");
    scanf("%f %f %f",&en,&boy,&yukseklik);
    hacim=en*boy*yukseklik;
    printf("havuzun dolmasi icin gereken su miktari :%.2f",hacim);










    return 0;
}
