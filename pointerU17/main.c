#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    char *gun[7]={"pazartesi","sali","carsamba","persembe","cuma","cumartesi","pazar"};
   // icinde 7 adet karakter dizisi pointer iceren diziyi temsil eder

   do{
    printf("lutfen 1 ile 7 arasinda bir deger giriniz");
    scanf("%d",&x);

   }while(x<=0 || x>7);
   printf("%d numarali gunun adi: %s",x,gun[x-1]);
    return 0;
}

