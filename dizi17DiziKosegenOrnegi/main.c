#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,size;
    printf("enter the size of square matris : ");
    scanf("%d",&size);
 int matris[size][size];
    for(i=0;i<size;i++){
        for(j=0;j<size;j++){
            if(i==j|| i+j==size-1){
                matris[i][j]=1;
                }else{
                    matris[i][j]=0;
            }
        }
    }


    for(i=0;i<size;i++){
        for(j=0;j<size;j++){
    printf("%4d",matris[i][j]);
        }
        printf("\n\n");
    }
    return 0;
}
//	matris :
//	1 0 1
//	0 1 0
//	1 0 1
