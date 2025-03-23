#include <stdio.h>
#include <stdlib.h>

//kullanýcý tarafýndan girilen N*N boyutlarýndaki bir matrisin kosegen degerlerinin toplamini
// dinamik bellek kullanarak gerceklestiren C programini yaziniz

int main()
{

    int i,j;
   int satir,sutun;
   int **matris;
   int toplam=0;

  printf("satir sayisini giriniz: ");
  scanf("%d",&satir);



  matris=(int**)calloc(satir,sizeof(int*));

  for(i=0;i<satir;i++){
            *(matris+i)=(int*)calloc(satir,sizeof(int));
        for(j=0;j<satir;j++){
            printf("matris : [%d][%d] ",i,j);
            scanf("%d",&matris[i][j]);
        }
     }

      for(i=0;i<satir;i++){
        for(j=0;j<satir;j++){
          if(i==j){
            toplam+=matris[i][j];
          }
        }
     }

      printf("toplam sonucu=%d",toplam);

    return 0;
}
