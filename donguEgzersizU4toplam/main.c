#include <stdio.h>
#include <stdlib.h>
//1 den kullanicinin girdigi sayiya kadar olan sayilarin toplamini hesaplayip ekrana bastiriniz
//1+2+3+4+
int main()
{
    int sayi,i,sonuc;
   printf("lutfen bir sayi giriniz:");
   scanf("%d",&sayi);

 i=1;
sonuc=0;
 while(i<=sayi){
 if(i==sayi){
   printf("%d\n",i);
 }else{
 printf("%d + ",i);
 }
sonuc+=i;
i++;
 }
printf("sonuc: %d",sonuc);




    return 0;
}
