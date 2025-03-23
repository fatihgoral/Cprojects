#include <stdio.h>
#include <stdlib.h>
topla(int n1,int n2){
   return n1+n2;
}


int main()
{
  int sayi1,sayi2;

  printf("lutfen 2 adet sayi giriniz : ");
  scanf("%d %d",&sayi1,&sayi2);

printf("bu iki sayinin toplami:%d\n",topla(sayi1,sayi2));

    return 0;
}
