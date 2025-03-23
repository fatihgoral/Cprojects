#include <stdio.h>
#include <stdlib.h>

int main()
{
   // bilgi txt dosyasi icerisinde bulunan bilgilerin karakter karakter okunarak ekrana gosterilmesini saglayan c programini yaziniz
 FILE *dosya;
 char karakter;
 dosya=fopen("bilgi.txt","r");
 if(dosya!=NULL){

     do{
        karakter=getc(dosya);
 if(karakter!=EOF){
    putchar(karakter);
 }
    }while(karakter!=EOF);


 }
 else{
    printf("dosya bulunamadi");
 }


    return 0;
}







