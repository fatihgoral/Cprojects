#include <stdio.h>
#include <stdlib.h>

int main()
{
    // dizilerle 3 sayinin ortalamasini hesaplama
    double sayilar[3];
    double avarage;
  printf("lutfen 3 sayiyyi giriniz ");
 scanf("%lf %lf %lf",&sayilar[1],&sayilar[2],&sayilar[3]);
 avarage=(sayilar[1]+sayilar[2]+sayilar[3])/3;
 printf("sonuc : %.3f",avarage);





    return 0;
}
