#include <stdio.h>
#include <stdlib.h>
#define PI 3.14
// kullanici tarafindan girilen yaricap degeri kullanilarak bir dairenin alanini ve cevresini hesaplayan tek bir fonk yaziniz
void hesapla(float r)
{
float alan=PI*pow(r,2);
float cevre=2*PI*r;
printf("dairenin alani:%.2f\n",alan);
printf("dairenin cevresi:%.2f\n",cevre);

}
int main()
{
float yaricap;
printf("yaricap degerini giriniz");
scanf("%f",&yaricap);
hesapla(yaricap);



    return 0;
}
