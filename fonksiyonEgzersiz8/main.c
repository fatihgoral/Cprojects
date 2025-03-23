#include <stdio.h>
#include <stdlib.h>
// kendisi haric pozitif bolenlerinin toplami kendisine esit olan sayilara mukemmel sayi adi verilmektedir
// buna göre klavyeden girilen bir sayinin mukemmel olup olmadigini fonksiyon kullanarak bulan c programini yaziniz
int mukemmelBul(int n){
  int i=1;
  int toplam=0;
  while(i<n)
  {
      if(n%i==0){
        toplam+=i;
      }
      i++;
  }
  if(toplam==n){
    return 1;
  }else{
  return 0;
  }

}

int main()
{
    int sayi;
    int sonuc;

printf("hade bir sayi girin ve bu sayinin mukemmel olup olmadagina bakalim :) ");
scanf("%d",&sayi);
sonuc=mukemmelBul(sayi);
if(sonuc==1){
    printf("sayi mukemmel bir sayidir");
}else{
printf("sayiniz mukemmel bir sayi degildir");
}
    return 0;
}
