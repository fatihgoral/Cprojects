#include <stdio.h>
#include <stdlib.h>

int main()
{
   char can[15]="abcdef"; //  A HARF�N�N ASCII kodu 97
   char canan[15]="ABCDEF"; //A HARF�N�N ASCII KODU 65

   int sonuc=strcmp(can,canan);
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
