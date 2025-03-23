#include <stdio.h>
#include <stdlib.h>

int main()
{
 int sayi;

    printf("lutfen bir sayi giriniz\n");
    scanf("%d",&sayi);
    if(sayi%2==0)
        printf("%d sayisi cift sayidir",sayi);
    else
       printf("%d sayisi tek sayidir",sayi);

    return 0;
}
