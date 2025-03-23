#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *dosya;
    dosya=fopen("ogrenci.txt","a");
    char isim[20],okul[50],bolum[50];

    printf("adiniz: ");
    gets(isim);
    printf("okulunuz : ");
    gets(okul);
    printf("bolumunuz");
    gets(bolum);
    fprintf(dosya,"%s\n %s\n %s\n",isim,okul,bolum);
    fclose(dosya);

    return 0;
}
