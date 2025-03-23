#include <stdio.h>
#include <stdlib.h>
/*
bir ogrenci evinde ogrenciler salonu haliyla kaplatmak istemektedirler
dosenecek halinin metrekaresi 150 tl dir
ayrica halici salonu dosemek icin 10000 tl iþcilik almaktadýr
buna gore metrekareyi en olarak girdi alan ve halýcýya odenmesi gereken
toplam tutari  hesaplayan bir C programi yaziniz

*/

int main()
{
    int en,boy,tutar;
   int metrekare;
   int iscilik=10.000;
   printf("dosenecek halininin en ve boy degerlerini giriniz :");
   scanf("%d %d",&en,&boy);
  metrekare=en*boy;
  tutar=iscilik + metrekare*150;
  printf("tutar: %d",tutar);





    return 0;
}
