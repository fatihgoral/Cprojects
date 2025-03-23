#include <stdio.h>
#include <stdlib.h>

int main()
{
    int factorial =1,i,number;


    printf("enter a number :");
    scanf("%d",&number);
    for(i=1;i<=number;i++){
        factorial*=i;
    }
    printf("faktorial sonucu : %d ", factorial);


    return 0;
}
