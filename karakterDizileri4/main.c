#include <stdio.h>
#include <stdlib.h>

int main()
{
   char can[15]="abcdef"; //  A HARFÝNÝN ASCII kodu 97
   char canan[15]="ABCDEF"; //A HARFÝNÝN ASCII KODU 65
// strncpy istenilen harfe kadar kýyaslar
   int sonuc=strncmp(can,canan,4);
  // printf("%d",sonuc);
   if(sonuc<0){
    printf("can degeri canandan kucuktur");
   }
   else if(sonuc>0){
    printf("can degeri canandan buyuktur");
   }
   else{
    printf("her ikisi birbirine esittir");
   }
    return 0;
}
