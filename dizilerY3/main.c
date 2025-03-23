#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dizi[]={1,2,3,4,5,6,7,8,9,10};
    int boyut=sizeof(dizi)/sizeof(dizi[0]);
    printf("dizinin eleman sayisi=%d",boyut);
    return 0;
}
