#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a[100][100],b[100][100],toplam[100][100],i,j,satir,sutun;// dizi boyutunu muhakkak vermelisin
   printf("lutfen dizinin satir sayisini girin: ");
   scanf("%d",&satir);

   printf("lutfen dizinin sutun sayisini girin: ");
   scanf("%d",&sutun);

   printf("a matrisi elemanlarini giriniz:\n");
   for(i=0;i<satir;i++){
    for(j=0;j<sutun;j++){
        printf("a[%d][%d] = ",i,j);
        scanf("%d",&a[i][j]);
    }
   }
     printf("b matrisi elemanlarini giriniz:\n");
   for(i=0;i<satir;i++){
    for(j=0;j<sutun;j++){
        printf("b[%d][%d] = ",i,j);
        scanf("%d",&b[i][j]);
    }
   }
   for(i=0;i<satir;i++){
    for(j=0;j<sutun;j++){
            toplam[i][j]=a[i][j]+b[i][j];
    }
   }
    for(i=0;i<satir;i++){
    for(j=0;j<sutun;j++){
   printf("%4d",toplam[i][j]);
    }
    printf("\n");
    }

    return 0;
}
