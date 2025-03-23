#include <stdio.h>
#include <stdlib.h>



int main() {
    // Ýki adet 3x4 boyutunda dizi tanýmlýyoruz
    int i,j;
    int dizi1[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    int dizi2[3][4] = {
        {13, 14, 15, 16},
        {17, 18, 19, 20},
        {21, 22, 23, 24}
    };

 int toplam[3][4];
 for(i=0;i<3;i++){
    for(j=0;j<4;j++){
        toplam[i][j]=dizi1[i][j]+dizi2[i][j];
    }
 }


 for(i=0;i<3;i++){
    for(j=0;j<4;j++){
            printf("%4d",toplam[i][j]);
    }
    printf("\n");
}
return 0;
}
