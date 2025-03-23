#include <stdio.h>
#include <stdlib.h>

int main()
{
  int matrix[4][2][5]=
  {
      {{9,2},{7,5,6}},
       {{3,5,6},{45,67,43,1}},
    {{43,21,6,23},{23,45,67,89,1}},
      {{11,3,43,2,90},{1,46,23,45}}
};
// 5 tane sutun degerinde dolmayan yerler 0 ile doldurulur
  int i,j,k;
   for(i=0;i<4;i++){
   // printf("%d. set :\n",i+1);
   for(j=0;j<2;j++){
    for(k=0;k<5;k++){
        printf("%4d",matrix[i][j][k]);
    }
    printf("\n");
   }
   printf("\n\n");
   }
    return 0;
}
