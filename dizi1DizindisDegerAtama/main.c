#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayilar[5];
    for(int i=1;i<=5;i++){
        sayilar[i]=i*3;
    }
    for(int i=1;i<=5;i++){
            printf("%d. dizi elemani : %d\n",i,sayilar[i]);
    }
    return 0;
}
