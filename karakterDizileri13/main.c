#include <stdio.h>
#include <stdlib.h>
// haftanin günlerini 1 ile 7 arasinda bir deger girerek
// do while dongusu kullanarak ekrana bastirin

int main()
{
   char gunler[7][50]={"ptesi","sali","crs","prs","cuma","cts","pzr"};
   int i=0;
   int n;
    do{
        printf("lutfen gune karsilik gelecek degeri giriniz");
        scanf("%d",&n);
       i++;
    }while(n<1|| n>7);
    printf("%d numarali haftanin gunu: %s",n,gunler[n-1]);

    return 0;
}
