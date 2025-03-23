#include <stdio.h>
#include <stdlib.h>
// haftanin günleri 1 ile 7 arasinda bir deger girerek
// do while dongusu kullanarak ekrana bastiriniz
int main()
{
    char gun[7][50]={"pazartesi","sali","carsamba","persembe","cuma","cumartesi","pazar"};
    int n;
    do{
        printf("lutfen bir ile 7 arasinda bir sayi giriniz: ");
        scanf("%d",&n);

    }while(n<=0 || n>7);
    printf("%d. siradaki gunun adi: %s'dir",n,gun[n-1]);

    return 0;
}
