#include <stdio.h>
#include <stdlib.h>

int main()
{

    int can[5];
    int *sayi1,*sayi2;
    int n;
    int gecici;



    printf("Lutfen dizimizin eleman sayisini giriniz\n");
    scanf("%d",&n);

    for(sayi1=can;sayi1<can+n;sayi1++)
    {
        printf("Lutfen eleman giriniz:\n");
        scanf("%d",sayi1);
    }
    printf("Dizimizin ilk hali: ");

    for(sayi1=can;sayi1<can+n;sayi1++)
    {
        printf("%4d",*sayi1);
    }
    printf("\n");
    for(sayi1=can,sayi2=can+n-1;sayi1<sayi2;sayi1++,sayi2--){
        gecici=*sayi1;
        *sayi1=*sayi2;
        *sayi2=gecici;
    }

    for(sayi1=can;sayi1<can+n;sayi1++)
    {
        printf("%4d ",*sayi1);
    }
    printf("\n");
    return 0;
}
