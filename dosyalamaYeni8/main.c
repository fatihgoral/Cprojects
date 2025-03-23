#include <stdio.h>
#include <stdlib.h>
//  fgetc--> dosyadan tek bir karakter okur
// fscanf()--> doSyadan bicimlendirilmis karakter dizisi okur

int main()
{
   FILE *dosya;
   char karakter;

 dosya=fopen("yazi.txt","r");
   if(dosya!=NULL){

    karakter=fgetc(dosya);
    printf("%c",karakter);

   }else{
       printf("dosya bulunmadi");
   }
   fclose(dosya);
    return 0;
}
