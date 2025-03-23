#include <stdio.h>
#include <stdlib.h>
// kuþllanicidan 2 adet 3 e 2 lik matris degerlerini aliniz bunlari bir 3 boyutlu sayi dizisine atayiniz
// hangi indexte hangi deger var bunlari konsola bastiriniz
int main()
{
    int dizi[2][3][2];
    int i,j,k;

    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            for(k=0;k<2;k++){
                     printf("dizi[%d][%d][%d] = ", i, j, k);
                scanf("%d",&dizi[i][j][k]);

            }
        }
    }

    printf("Girilen degerler : \n");
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            for(k=0;k<2;k++){
    printf("dizi[%d][%d][%d]=%d",i,j,k,dizi[i][j][k]);
    printf("\n");
            }
        }
    }

    return 0;
}
