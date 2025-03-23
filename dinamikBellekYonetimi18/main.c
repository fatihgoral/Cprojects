#include <stdio.h>
#include <stdlib.h>
//kullanici tarafýndan girilenn N*N boyutlarýndaki bir matrisin kosegen degerleri toplamini
// dinamik bellek kullanarak gerceklestiren C programini yaziniz
int main()
{
    int boyut;
    int **matris;
    int i,j;
    int toplam=0;

    printf("lutfen matrisin boyut ve sutun sayisini giriniz: ");
    scanf("%d",&boyut);
    matris=(int**)malloc(boyut*sizeof(int *));
    for(i=0;i<boyut;i++){
        matris[i]=(int* )calloc(boyut,sizeof(int));
        for(j=0;j<boyut;j++){
            printf("matris[%d][%d]: ",i,j);
            scanf("%d",&matris[i][j]);
        }
    }
    printf("\n\n");
    for(i=0;i<boyut;i++){

        for(j=0;j<boyut;j++){
                if(i==j){
                    toplam=toplam+matris[i][j];
                }
    }
    }
    printf("toplam =%d\n",toplam);
      // Belleði serbest birakma
    for (i = 0; i < boyut; i++) {
        free(matris[i]);  // Her satir icin ayrilan belleði serbest birak
    }
    free(matris);  // Matrisin kendisi için ayrilan belleði serbest býrak
    return 0;
}
