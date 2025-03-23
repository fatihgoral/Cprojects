#include <stdio.h>
#include <stdlib.h>
#define N 10

// 10 tane integer tipinde elemani olan bir dizi tanimlayin bu elemanlari kullanicinin girmesini saglayýn
// pointer yardimiyla dizideki elemanlari en buyuk ve en kucuk degerini bulun

int main()
{

 int i,min,max;
 int *ptr1,*ptr2;
 int can[N];

 printf("%d kadar deger giriniz: ",N);
 for(ptr1=can;ptr1<can+N;ptr1++){
      scanf("%d",ptr1) ;
 }

 min=can[0];
 max=can[0];

 for(ptr2=can+1;ptr2<can+N;ptr2++){
    if(*ptr2>max){
        max=*ptr2;
    }
    if(*ptr2<min){
        min=*ptr2;
    }

 }
printf("maksimum deger sonucu :%d\n",min);
printf("minimum deger sonucu :%d\n",max);

    return 0;
}
