#include <stdio.h>
#include <stdlib.h>

int main()
{

    int sayim;
   int  toplam=0;
 int i=0;

    printf("lutfen bir sayi giriniz:"); // girilen sayiya kadar toplam
    scanf("%d",&sayim);

    for(i=1;i<=sayim;i++){
    toplam+=i;
    }
    printf("girilen sayiya kadar olan toplam: %d\n",toplam);
    return 0;
}
