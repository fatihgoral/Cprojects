#include <stdio.h>
#include <stdlib.h>
/*KLASIK YONTEM
    int i,j;
    int dizi[3][4];
    for(i=0;i<3;i++){
        for(j=0;j<4;j++){
            dizi[i][j]=i*10+j+1;
            printf("%3d",dizi[i][j]);
        }
        printf("\n");
    }

*/
int main()
{
    int i,j;
    int **m=(int **)malloc(3*sizeof(int*));
    for(i=0;i<3;i++){
         m[i]=(int *)malloc(4*sizeof(int));
        for(j=0;j<4;j++){
            m[i][j]=i*10+j+1;
              printf("%3d",m[i][j]);
        }
        printf("\n");
    }
for (i = 0; i < 3; i++) {
    free(m[i]); // Her satýrý serbest býrak
}
free(m); // Satýr iþaretçilerini tutan belleði serbest býrak



// DINAMIK BELLEK ILE COZUM



    return 0;
}
