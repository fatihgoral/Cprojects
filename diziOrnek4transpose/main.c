#include <stdio.h>
#include <stdlib.h>
// girilen matrisin transpose halini bulan program

int main()
{
    int anaMatris[10][10],transpose[10][10],satir,sutun,i,j;
   printf("lutfen matrisin satir sayisini giriniz: ");
   scanf("%d",&satir);
   printf("lutfen sutun sayisini giriniz: ");
   scanf("%d",&sutun);

   for(i=0;i<satir;i++){
    for(j=0;j<sutun;j++){
        printf("anaMatris[%d][%d]: ",i,j);
        scanf("%d",&anaMatris[i][j]);
    }
   }
   printf("ANA MATRÝS :\n");
 for(i=0;i<satir;i++){
    for(j=0;j<sutun;j++){
 printf("%4d",anaMatris[i][j]);
    }
    printf("\n");
 }

    for(i=0;i<satir;i++){
    for(j=0;j<sutun;j++){
     transpose[j][i]=anaMatris[i][j];
    }
    }
    printf("TRANSPOSE MATRÝS: \n");
    for(i=0;i<satir;i++){
        for(j=0;j<sutun;j++){
            printf("%4d",transpose[i][j]);
        }
        printf("\n");
    }


    return 0;
}
