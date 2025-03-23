#include <stdio.h>
#include <stdlib.h>
void calculus(int saniye){
int saat,dakika,zaman;
saat=saniye/3600;
zaman=saniye%3600;
dakika=zaman/60;
saniye=zaman%60;
printf("%d:%d:%d",saat,dakika,saniye);




}

int main()
{
    // kullanici tatrafindan saniye olarak girilen bir degerin saat:dakika:saniye (hh:mm:ss) formatina
    // donusturulmesinþ saglayan c kodunu yaziniz
  int x;
    printf("saniye degerini giriniz");
    scanf("%d",&x);
    calculus(x);


    return 0;
}
