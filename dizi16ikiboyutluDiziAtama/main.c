#include <stdio.h>
#include <stdlib.h>

int main()
{
   int i,j,row,column;
   printf("satir sayisini giriniz:");
   scanf("%d",&row);
    printf("sutun sayisini giriniz:");
   scanf("%d",&column);
   int matrix[row][column];

   for( i=0;i<row;i++){
    for(j=0;j<column;j++){
     printf("\ndegeri giriniz matrix[%d][%d]=",i,j);
    scanf("%d",&matrix[i][j]);
    }
   }
   printf("\n\n");
  for(i=0;i<row;i++){
    for(j=0;j<column;j++){
     printf("%4d",matrix[i][j]);
    }
    printf("\n\n");
    }


    return 0;
}
