#include <stdio.h>
#include <stdlib.h>
// sayi olusturma
//tek haneli 3 sayi olan x,y,z yi girdi olarak alan ve yüzler basamagýna x
//onlar basamagýna y ve birler basamagina z koyan c programini yaziniz

int main()
{
    int x,y,z,sayi_total;

printf("yuzler basamagi: ");
scanf("%d",&x);

printf("onlar basamagi");
scanf("%d",&y);

printf("birler basamagi:");
scanf("%d",&z);

 sayi_total=100*x+10*y+z;
 printf("elde edilen sayi: %d",sayi_total);




    return 0;
}
