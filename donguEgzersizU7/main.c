#include <stdio.h>
#include <stdlib.h>
// girilen sayinin birler onlar yüzler bibler basamagýný bulma
int main()
{
    int sayi;
    int binlerBasamagi,yuzlerBasamagi,onlarBasamagi,birlerBasamagi;

    printf("lutfen bir sayi giriniz: ");
    scanf("%d",&sayi);


  birlerBasamagi=sayi%10;
  onlarBasamagi=(sayi/10)%10 ;
  yuzlerBasamagi=(sayi/100)%10;
  binlerBasamagi=(sayi/1000)%10;

  printf("birler basamagi: %d\n",birlerBasamagi);
  printf("onlar basamagi:  %d\n", onlarBasamagi);
  printf("yuzler basamagi: %d\n",yuzlerBasamagi);
  printf("binler basamagi: %d\n",binlerBasamagi);






    return 0;
}
