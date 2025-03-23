#include <stdio.h>
#include <stdlib.h>
// matrisin transpozunu bulma
int main()
{
    int anaMatris[10][10],transpose[10][10],satir,sutun,i,j;

   printf("satir sayisini giriniz: ");
   scanf("%d",&satir);
   printf("sutun sayisini giriniz: ");
   scanf("%d",&sutun);

   for( i=0;i<satir;i++){
    for(j=0;j<sutun;j++){
            printf("[%d][%d] : ",i,j);
            scanf("%d",&anaMatris[i][j]);
    }
   }

  printf("ANA MATRIS\n");
   for( i=0;i<satir;i++){
    for(j=0;j<sutun;j++){
            printf("%4d",anaMatris[i][j]);
    }
    printf("\n");
   }
   // transpose islemi
    for( i=0;i<satir;i++){
    for(j=0;j<sutun;j++){
            transpose[j][i]=anaMatris[i][j];
    }
    }

printf("TRANSPOSE MATRIS\n");
        for( i=0;i<sutun;i++){
    for(j=0;j<satir;j++){
            printf("%4d",transpose[i][j]);
    }
    printf("\n");
        }
    return 0;
}
