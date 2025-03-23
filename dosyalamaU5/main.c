#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *dosya;
    char numaralar[10][10];
    char isimler[10][20];
    int notlar[10];
    int i=0;
 if((dosya=fopen("ogrenciler.txt","r"))!=NULL){
     while(!feof(dosya)){
        fscanf(dosya,"%s %s %d",&numaralar[i],&isimler[i],&notlar[i]);
        printf("%s %s %d\n",numaralar[i],isimler[i],notlar[i]);
       i++;
     }

 }

   else{
 printf("dosya bulunamadi ");
 }
 fclose(dosya);


    return 0;
}


