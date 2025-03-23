#include <stdio.h>
#include <stdlib.h>
// 1'den 10' a kadar her sayinin faktoriyelini fonksiyon kullanarak hesaplayan ve
// sonuclari ekrana listeleyen C programini yaziniz
faktoriyel(int sayi){
    int sonuc=1;
for(int i=1;i<=sayi;i++){
   sonuc*=i;
}
    return sonuc;

}


int main()
{
    int i;
    for(i=1;i<=10;i++){
        printf("%d!=%d\n",i,faktoriyel(i));
    }

    return 0;
}
