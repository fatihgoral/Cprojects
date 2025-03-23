#include <stdio.h>
#include <stdlib.h>

int main()
{
 int dizi1 [3][4]={{1,2,3,6},{4,5,6,1},{7,8,9,3}};
 int dizi2 [3][4]={{1,2,3,6},{4,5,6,1},{7,8,9,3}};
 int toplam[3][4];
int i,j;

 for( i=0;i<3;i++){

    for( j=0;j<4;j++){

        toplam[i][j]=dizi1[i][j]+dizi2[i][j];
    }
 }


 for(i=0;i<3;i++){

    for(j=0;j<4;j++){

       printf("%4d",toplam[i][j]);
    }
    printf("\n");
 }

    return 0;
}
