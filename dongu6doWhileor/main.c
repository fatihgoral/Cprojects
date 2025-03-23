#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi;
    printf("lutfen bir sayi giriniz : ");
    scanf("%d",&sayi);
    int i=1;

    do{
       sayi*i;
         printf("sonuc : %d ",sayi*i);
        i++;

    }while(i<=10);
    return 0;
}
