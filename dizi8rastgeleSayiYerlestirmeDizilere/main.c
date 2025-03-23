#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,zar,kacKereGeldi[]={0,0,0,0,0,0,0};
    srand(time(NULL));
    for(i=1;i<=100;i++){
        zar=rand()%6+1;
     kacKereGeldi[zar]++;
    }
   for(i=1;i<=6;i++){
    printf("zar no: %d\t\t  gelme sayisi : %d\n",i,kacKereGeldi[i]);
   }


    return 0;
}
