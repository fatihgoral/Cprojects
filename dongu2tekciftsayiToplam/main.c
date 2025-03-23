#include <stdio.h>
#include <stdlib.h>

int main()
{
    int toplam=0,sum=0;
   for(int i=0;i<=6;i+=2){
    toplam+=i;
   }
   printf("cift sayilarin toplami: %d \n ",toplam);

   for(int i=1;i<=9;i+=2){
    sum+=i;
   }
printf("tek sayilarin toplami: %d",sum);
    return 0;
}
