#include <stdio.h>
#include <stdlib.h>
//1 den 10 a kadar her bir sayinin faktoriyelini fonk kullanarak hesaplayan program
fakthesap(int n){
int sonuc=1;
for(int i=1;i<n;i++){
    sonuc*=i;
}
return sonuc;
}




int main()
{
    for(int i=1;i<=10;i++){
        printf("%d sayisinin faktoriyel sonucu:%d\n",i,fakthesap(i));
    }
    return 0;
}
