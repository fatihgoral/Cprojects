#include <stdio.h>
#include <stdlib.h>
// kullanicidan 2 adet matrisin satir sutun sayisini ve matris degerlerini aliniz
// iki matrisin toplamini bulup ekrana yaziniz

int main()
{
    int a[100][100],b[100][100],toplam[100][100],i,j,satir,sutun;

    printf("satir sayisini giriniz");
    scanf("%d",&satir);

    printf("sutun sayisini giriniz");
    scanf("%d",&sutun);

    printf("A  matrisinin elemanlarini giriniz: ");
    for(i=0;i<satir;i++){
        for(j=0;j<sutun;j++){
            printf("a[%d][%d]",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("B  matrisinin elemanlarini giriniz: ");
    for(i=0;i<satir;i++){
        for(j=0;j<sutun;j++){
            printf("b[%d][%d]",i,j);
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
