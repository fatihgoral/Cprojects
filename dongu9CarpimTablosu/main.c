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

   // de�erinin 1 ile 10 aras�nda olup olmad���n� kontrol ediyor. E�er kullan�c� bu aral�k d���nda bir say� girerse,
   //  ekrana "please dont do that" mesaj�n� yazd�r�p, program� sonland�r�yor
 // program�n normal sekilde bitmesini saglar.
 }
 while(i<=10){
    printf("%d * %d=%d\n",number,i,number*i);
    i++;
 }

    return 0;
}
