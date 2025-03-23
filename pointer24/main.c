#include <stdio.h>
#include <stdlib.h>
//0 dan 14 e kadar olan degerleri dizide tanimlayin
//dizinin icindeki cift elemanlari ve tek elemanlari  bastirin
// bunlari yaparken pointer kullanin

int main()
{
int dizi[15]={0,1,2,3,4,5,6,7,8,9,10,11,12,13,14};
int i;
int* pointer;
/*Ilk iki dongude *(dizi + i) kullanilmis, cunku bu dongulerde i her seferinde artarak dizinin her bir elemanina sirasiyla erisir.
Ucuncu dongude ise pointer isaretci kullanilmis ve bu isaretci belirli araliklarla (2 eleman) hareket ettirilmis. pointer, baslangicta
ikinci elemani isaret eder ve her dongude 2 eleman ileri tasinarak yalnizca tek sayi elemanlarina erisim saglar.
*/

printf("tum sayilar\n");
for(i=0;i<15;i++){
    printf("%4d",*(dizi+i));
}
printf("\ncift sayilar\n");
for(i=0;i<15;i+=2){
    printf("%4d",*(dizi+i));
}
printf("\ntek sayilar");
for(pointer=dizi+1;pointer<dizi+15;pointer+=2){
    printf("%4d",*pointer);
}
    return 0;
}



