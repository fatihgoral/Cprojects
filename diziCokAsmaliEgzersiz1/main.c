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
    printf("%d %d boyutunda bir matris giriniz\n",A,B);
    for(i=0;i<A;i++){
        for(j=0;j<B;j++){
            scanf("%d",can[i][j]);
        }
    }








}





int main()
{
 int max,min,toplam;
 int dizi[];
 tablo(can);

    return 0;
}
