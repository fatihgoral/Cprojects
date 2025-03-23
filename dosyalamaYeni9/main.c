#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *dosya;
    char k1[10],k2[10];
    int sayi;

    if((dosya=fopen("C:\\ckodlari\\dosyalamaYeni9\\deneme.txt","r"))!=NULL){

        fscanf(dosya,"%s",&k1);
        fscanf(dosya,"%s2",&k2);
        fscanf(dosya,"%d",&sayi);
        printf("%s %s %d ",k1,k2,sayi);
    }else{
    printf("dosya bulunmadi..");
    }
fclose(dosya);

    return 0;
}
