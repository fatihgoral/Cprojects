#include <stdio.h>
#include <stdlib.h>

int main()
{
    // bilgi.txt icersinde yer alan bilgilerin satir satir okunarak ekrana gosterilmesini saglayan c programini yaziniz
    FILE* dosya;
    char satir[100];
    char *karakter;
    dosya=fopen("bilgi.txt","r");
    if(dosya==NULL){
        printf("dosya olusturulmadi");
    }else{
        do{
        karakter=fgets(satir,100,dosya);
        if(karakter!=NULL){
            printf("%s",satir);
        }
    }while(karakter!=NULL);
    fclose(dosya);
    printf("OKUMA ISLEMI TAMAMLANDI\n");


    }
    return 0;
}







