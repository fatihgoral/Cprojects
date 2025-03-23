#include <stdio.h>
#include <stdlib.h>

int main()
{
int sayi1,sayi2,i,j;
int asalmi;

printf("kucuk sayiyi giriniz:");
scanf("%d",&sayi1);
printf("buyuk sayiyi giriniz:");
scanf("%d",&sayi2);

if(sayi1<2 || sayi2<2){
    sayi1=2;
    sayi2=2;
}

for(i=sayi1;i<sayi2;i++){
    asalmi=1;
    for(j=2;j<=i/2;j++){
        if(i%j==0){
            asalmi=0;
            break;
        }
    }
  if(asalmi){
printf("%d\n",i);
  }
}
    return 0;
}
