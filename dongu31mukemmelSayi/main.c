#include <stdio.h>
#include <stdlib.h>

int main()
{
    // girilen sayiya kadar mükemmel sayi bulma

    // Mukemmel sayý, kendisi haric pozitif bolenlerinin toplami kendisine eþit olan sayidýr.
    // ornegin, 6 sayisi (1 + 2 + 3 = 6) mukemmel sayidÝr.

 int upperLimit,i,j,sum;
 printf("hangi sayiya kadar olan mukemmel sayilar listelensin");
 scanf("%d",upperLimit);


 for(i=1;i<=upperLimit;i++){
    sum=0;
    for(j=1;j<=i/2;j++){
    if(i%j==0)
        sum+=j;
 }
 if(sum==i){
 printf("%d mukemmel sayidir\n",i);
}
 }






















    return 0;
}
