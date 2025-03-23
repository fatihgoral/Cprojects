#include <stdio.h>
#include <stdlib.h>

//Matris Ýçin Bellekten Yer Ayýrma ve Ekrana Basma

int main()
{
    int i,j;
   int satir,sutun;
   int **matris;

  printf("satir sayisini giriniz: ");
  scanf("%d",&satir);

  printf("sutun sayisini giriniz: ");
  scanf("%d",&sutun);

  matris=(int**)calloc(satir,sizeof(int*));

     for(i=0;i<satir;i++){
            *(matris+i)=(int*)calloc(sutun,sizeof(int));
        for(j=0;j<sutun;j++){
            printf("matris : [%d][%d] ",i,j);
            scanf("%d",&matris[i][j]);
        }
     }

     for(i=0;i<satir;i++){
        for(j=0;j<sutun;j++){
            printf("%3d",matris[i][j]);
        }
        printf("\n");
     }

     for(i=0;i<satir;i++){
        free(matris[i]);
     }

     free(matris);

    return 0;
}
