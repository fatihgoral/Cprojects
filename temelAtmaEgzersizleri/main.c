#include <stdio.h>
#include <stdlib.h>
//bolunen ve bolen sayi degerlerini aliniz bolum ve kalan degerlerini bulup ekrana bastiriniz
int main()
{
int bolunen,kalan,bolum,bolen;
printf("lutfen bolunen degeri giriniz: ");
scanf("%d",&bolunen);

printf("lutfen bolen sayi giriniz: ");
scanf("%d",&bolen);

bolum=bolunen/bolen;
kalan=bolunen%bolen;

printf("bolum degeri: %d\n",bolum);
printf("kalan degeri: %d\n",kalan);

    return 0;
}
