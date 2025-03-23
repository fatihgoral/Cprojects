#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1,num2,num3,max;
    printf("lutfen kiyaslamak istediginiz 3 sayiyi giriniz");
    scanf("%d %d %d",&num1,&num2,&num3);

    max=(num1>num2)?((num1>num3)?num1:num3):(num2>num3?num2:num3);

     printf("en buyuk sayi: %d",max);


    return 0;
}
