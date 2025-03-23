#include <stdio.h>
#include <stdlib.h>

int main()
{
 FILE *dosya;
 dosya=fopen("ogrenci.txt","w");
 char ad[20],okul[50],bolum[50];


 printf("adiniz ve soyadiniz :");
 gets(ad);

 printf("okulunuzu giriniz: ");
 gets(okul);

 printf("bolumunuzu giriniz: ");
 gets(bolum);

 fprintf(dosya," %s \t %s \t %s\t ",ad,okul,bolum);


 fclose(dosya);

    return 0;
}
