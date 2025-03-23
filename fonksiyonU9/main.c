#include <stdio.h>
#include <stdlib.h>

//kendi haric pozitif tam bolenlerinþn toplami kendisine esit olan sayilara mukemmel sayi denir
// buna gore klavyeden girilen bir sayinin mukemmel olup olmadiginþ fonksiyon kullanarak bulan c programini yaziniz
// ornek 6=1+2+3
void perfect(int sayi){
    int toplam=0;
 for(int i=1;i<sayi;i++){
    if(sayi%i==0){
        toplam+=i;
    }
 }
if(sayi==toplam){
   printf("girilen sayi Mukemmel sayidir");
}else{
printf("girilen sayi mukemmel sayi degildir");
}
}
int main()
{
    int n;
  printf("mukemmel sayi kontrolu yapilacak sayiyi giriniz");
  scanf("%d",&n);
 perfect(n);

    return 0;
}
