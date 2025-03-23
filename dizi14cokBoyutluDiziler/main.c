#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayilar[3][4]={
    {3,4,5,11},
     {7,9,4,10},
     {12,13,19,25}

     };
     for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            printf("%5d",sayilar[i][j]);
        }
        printf("\n\n");
     }



    return 0;
}
