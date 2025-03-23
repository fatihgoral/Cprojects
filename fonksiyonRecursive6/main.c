#include <stdio.h>
#include <stdlib.h>
/*girilen 2 sayinin carpim degerini CARPMA ÝSARETÝ OLMADAN ekrana yazdiran PROGRAM
*/
int carpim(int sayi1,int sayi2){

    int sonuc;
   if(sayi2==1){
  sonuc=sayi1;
   }else{
   sonuc=sayi1+carpim(sayi1,sayi2-1);
   }
return sonuc;
}

int main()
{
    int a,b;
    printf("lutfen iki sayi degerini giriniz:\n");
    scanf("%d %d",&a,&b);
    printf("%d sayisi ile %d sayisini carpim sonucu :%d",a,b,carpim(a,b));
    return 0;
}
