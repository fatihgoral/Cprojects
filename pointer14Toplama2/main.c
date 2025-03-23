#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi1,sayi2,toplam;
    int *ptr1,*ptr2;
    ptr1=&sayi1;
    ptr2=&sayi2;


  printf("lutfen 2 sayi giriniz:\n");
  scanf("%d %d",ptr1,ptr2);
  toplam= *ptr1 + *ptr2;
  printf("toplam : %d",toplam);


    return 0;
}
