#include <stdio.h>
#include <stdlib.h>
#define A 3
#define B 2

// 3 adet fonk yazin
// kullaniciya bir miatrisin elemanlarini girdiren bir fonksiyon yazin
// girdiginiz matris degerlerinin en büyük,en kucuk ve girilen elemanlarin toplamþini bulan bir fonk yazin.bu fonksiyonu main fonksiyonundan degisken adresi cagirma yontemiyle cagirin
// elemanlari girilen matrisi ekrana yazdirmaya yarayan bir fonk yazin
// yukariki fonksiyonlari cagiran c programini yaziniz



void tablo(int can[A][B]){
    int i,j;
    printf("%d * %d boyutunda bir matris giriniz: \n",A,B);
    for(i=0;i<A;i++){
        for(j=0;j<B;j++){
            scanf("%d",&can[i][j]);
        }
    }
}
void print_tablo(int can[A][B]){
int i,j;
printf("tablomuz su sekilde gorunmektedir\n");
for(i=0;i<A;i++){
    for(j=0;j<B;j++){
        printf("%4d",can[i][j]);
    }
    printf("\n");
}
}
void calcul(int can[A][B],int* max,int *min,int* toplam){
int i,j;

*max=can[0][0];
*min=can[0][0];
*toplam=0;
for(i=0;i<A;i++){
    for(j=0;j<B;j++){
        if(can[i][j]>max){
            *max=can[i][j];
        }
       if(can[i][j]<min){
        *min=can[i][j];
       }

     *toplam+=can[i][j];


    }
}

}
int main()
{
 int max,min,toplam;
 int can[A][B];
 tablo(can);
print_tablo(can);
calcul(can,&max,&min,&toplam);
printf("max deger:%d\n",max);
printf("min deger:%d\n",min);
printf("toplam deger:%d\n",toplam);

    return 0;
}
