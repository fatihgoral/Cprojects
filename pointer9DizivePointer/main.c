#include <stdio.h>
#include <stdlib.h>

int main()
{
    char kelime[5]="fatih";
    char *p1;

    p1=kelime;

    int size=sizeof(kelime)/sizeof(kelime[0]);
    for(int i=0;i<size;i++){
            printf("%d. harf : %c\n",i+1,*(kelime+i));

    }

