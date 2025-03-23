#include <stdio.h>
#include <stdlib.h>

int main()
{
  int i,j,sum=0;
  int matrix[5][5]={
  { 5,3,7,12,19},
  {11,40,61,8,13},
   {14,98,67,33,21},
    {16,17,57,59,14},
     {81,82,67,8,19},
  } ;
  for(i=0;i<5;i++){
    for(j=0;j<5;j++){
        printf("%4d",matrix[i][j]);
    }
    printf("\n");
  }
printf("\n\n");


 for(i=0;i<5;i++){
        printf("%d. satir toplami ",i+1);
    for(j=0;j<5;j++){
 sum+=matrix[i][j];
    }
 printf("%d\n",sum);
 sum=0;
 }
 printf("\n\n\n");

 for(i=0;i<5;i++){
 printf("%d.sutun toplami : ",i+1);
    for(j=0;j<5;j++){

        sum+=matrix[j][i];
    }
 printf("%d\n",sum);
sum=0;

 }





















    return 0;
}
