#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayilar[3];
    int i=0;

    while(i<3){
        scanf("%d",&sayilar[i]);
        i++;
    }
    i=0;
     while(i<3){
        printf("%d\n",sayilar[i]);
        i++;
     }


    return 0;
}
