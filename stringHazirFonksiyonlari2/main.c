#include <stdio.h>
#include <stdlib.h>

int main()
{
    char isim[10]="fatih";
    char isimAlani[10];
    printf("senin ismin %s\n",strcpy(isimAlani,isim));

    char mesaj[10];
    printf("merhaba %s\n",strcpy(mesaj,"muslera"));

    char ad[10]="meliha";
    char adKopya[10];
    for(int i=0;i<strlen(ad);i++){
        printf("merhaba %s\n",strcpy(adKopya,ad));
    }

    return 0;
}
