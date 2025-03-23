#include <stdio.h>
#include <stdlib.h>

int main()
{
    // while dongusu ile tek ve cift sayilari ekrana basma
    int i=1;
    int j=0;
    int sayi;
    printf("lutfen bir sayi giriniz:");
    scanf("%d",&sayi);

    while(i<=sayi){
            printf("tek sayilar: %d\n",i);
        i+=2;

    }



    while(j<=sayi){
        printf("cift sayilar: %d\n",j);
        j+=2;
    }

    return 0;
}
