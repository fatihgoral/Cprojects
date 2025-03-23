#include <stdio.h>
#include <stdlib.h>

int main()
{
 int i,number;
 number=0;
 i=1;
 printf("enter a number from 1 to 10 :");
 scanf("%d",&number);
 if(number<1 || number>10){
    printf("please dont do that\n");
    return 0;

   // deðerinin 1 ile 10 arasýnda olup olmadýðýný kontrol ediyor. Eðer kullanýcý bu aralýk dýþýnda bir sayý girerse,
   //  ekrana "please dont do that" mesajýný yazdýrýp, programý sonlandýrýyor
 // programýn normal sekilde bitmesini saglar.
 }
 while(i<=10){
    printf("%d * %d=%d\n",number,i,number*i);
    i++;
 }

    return 0;
}
