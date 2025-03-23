#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    // karekök alma hazır fonksiyonu
 for(int i=1;i<100;i++){
    printf("karekök %d : %.2f\n",i,sqrt(i));
 }
 double x=216,result;

 result=cbrt(x);
 printf("%lf sayisinin kup kök sonucu %lf dir\n",x,result);
printf("sonuc : %lf:\n", cbrt(64));
// cbrt fonksiyonu her zaman double deger geri dondurur

double y=6.45,result2;
result2=ceil(y);
printf("result:%.2f\n",result2);
// verilen bir ondalik sayıyı bir ust tam sayiya
//yuvarlayan bir fonksiyondur
double z=7.23;
int k=-19;
printf("SONUC : %.2f\n",floor(z));
printf("Sonuc : %.2f\n",floor(k));

    return 0;
}
