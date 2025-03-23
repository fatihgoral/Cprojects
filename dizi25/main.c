#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ogr[2][2][20], vize[2][2], finalsinav[2][2];
    float ort[2][5];
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            printf("%d. siniftaki %d. ogrencinin adi : ", i+1,j+1);
            scanf("%s",&ogr[i][j]);
            printf("%d. siniftaki %d. ogrencinin vizesi : ", i+1,j+1);
            scanf("%d",&vize[i][j]);
            printf("%d. siniftaki %d. ogrencinin finali : ", i+1,j+1);
            scanf("%d",&finalsinav[i][j]);
    ort[i][j]=(float)vize[i][j]*0.4+ (float)finalsinav[i][j]*0.6;

        }
    }
printf("\n*************************\n");
for(int i=0;i<2;i++){
    printf("\n %d.siniftaki ogrencilerin notlari \n",i+1);
    for(int j=0;j<2;j++){
        printf("%s' nin notu = %.2f\n",ogr[i][j],ort[i][j]);
    }
}

