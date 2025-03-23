#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char dizi1[]="bonne";
    char dizi2[]="soiree";
    char sonuc[100]="";
    strcpy(sonuc,dizi1);
    strncpy(sonuc+3,dizi2,5);// sonuc kelimesi dizimin ilk elemanin adresini verir
    printf("%s",sonuc);
    return 0;
}
