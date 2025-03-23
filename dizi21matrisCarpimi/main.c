#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x[50][50],y[50][50],result[50][50];
    int i,j,k,sum=0;
    int xrows,xcolumns,yrows,ycolumns;
    printf("x matrisinin satir ve sutununu gir : ");
    scanf("%d %d",&xrows,&xcolumns);
    printf("x matrisinin degerlerini giriniz: ");
    for(i=0;i<xrows;i++){
        for(j=0;j<xcolumns;j++){
               printf("x[%d][%d]=",i,j);
            scanf(" %d",&x[i][j]);
        }
    }


     printf("y matrisinin satir ve sutununu gir : ");
    scanf("%d %d",&yrows,&ycolumns);
    if(xcolumns!=yrows){
        printf("uzgunum bu matrisler carpilamaz... ");
    }else{
    printf("y matrisinin degerlerini giriniz: ");
    for(i=0;i<yrows;i++){
        for(j=0;j<ycolumns;j++){
                printf("y[%d][%d]=",i,j);
            scanf("%d",&y[i][j]);
        }
    }
    }
    printf("\n");
    for(i=0;i<xrows;i++){
        for(j=0;j<ycolumns;j++){
           for(k=0;k<yrows;k++){
            sum+=x[i][k]*y[k][j];
           }
           result[i][j]=sum;
           sum=0;
        }
    }

    printf("sonuc :\n ");
    for(i=0;i<xrows;i++){
        for(j=0;j<ycolumns;j++){
            printf("%5d",result[i][j]);
        }
        printf("\n\n");
    }
    printf("\n");
    return 0;
}
