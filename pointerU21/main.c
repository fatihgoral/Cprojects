#include <stdio.h>
#include <stdlib.h>
// kullanici tarafindan N pozitif tamsayisinin faktoriyelinin hesaplanmasini saglayan kodu pointer kullanarak yaziniz
int faktoriyel(int *sayi){
int i;
int sonuc=1;

  for (i = *sayi; i >= 1; i--) {
        sonuc *= i;  // i ile çarpýyoruz
    }
    return sonuc;
}




int main()
{
    int N;
    int orjinalsayi;
printf("lutfen faktoriyeli hesaplanavcak sayiyi giriniz");
scanf("%d",&N);
orjinalsayi=N;
printf("%d!=%d",orjinalsayi,faktoriyel(&N));

    return 0;
}

