#include <stdio.h>
#include <stdlib.h>

int bolum(int bolunen,int bolen){
 if(bolen==0){
    return 0;
 }
else if(bolunen<bolen){
    return 0;
 }
else if(bolunen-bolen==0){
    return 1;
}

else{
    return(1+bolum(bolunen-bolen,bolen));
}
}



int main()
{
   /* klavyeden girilen iki tamsayinin b�l�m�n�n(A/B)
   b�lme sembol� kullanmadan gerceklestiren c program�n� recursive fonksiyon
    yardimiyla yaziniz.
    */
    int a,b;
    printf("lutfen bolunen sayiyi giriniz");
    scanf("%d",&a);
    printf("lutfen bolen sayiyi giriniz ");
    scanf("%d",&b);
  printf("bolum=%d\n",bolum(a,b));
  printf("kalan =%d",a-(bolum(a,b)*b));
//  Kalani bulmak icin su mantigi kullaniriz: Bir sayininbir baska sayiya bolunmesi
// durumunda kalan, bolunen sayidan (a), bolum ile bolenin carpimini
//  cikardigimizda kalan sayidir.

    return 0;
}
