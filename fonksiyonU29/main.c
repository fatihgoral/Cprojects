#include <stdio.h>
#include <stdlib.h>
// kullanici tatrafindan girilen bir N pozitif tamsayinin karekök bulunmasini
// saglayan sqrt() kullanmadan c programini yaziniz
//K=A/2      1 den 50 ye kadar K^2+A/2K
double karekokbul(double n){
    int i;
    if(n>0.0){
        double karekok=n/2;
        for(i=0;i<50;i++){
        karekok=((karekok*karekok)+n)+(2*karekok);
        }
        return karekok;

    }else if(n==0){
        return 0;
    }else{
    printf("lutfen gecerli bir deger giriniz....");
    return -1;  // Negatif sayýlar için hata durumu
    }
}
int main()
{
    double sayi;
printf("lutfen kullanici karekoku hesaplanmak istenen sayiyi giriniz: ");
scanf("%lf",&sayi);
double sonuc = karekokbul(sayi);
    if (sonuc != -1) {
        printf("Girilen sayinin karekoku: %.10lf\n", sonuc);
    }



    return 0;
}
