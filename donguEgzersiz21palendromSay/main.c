#include <stdio.h>
#include <stdlib.h>
// girilen sayinin palendrom sayi kontrolu
// tersi kendisine esit olan sayilara palendrom denir

int main()
{
    int sayi,kalan,tersi=0;
    printf("lutfen bir sayi giriniz\n");
    scanf("%d",&sayi);
   while(sayi!=0){
    kalan=sayi%10;
    tersi=tersi*10+kalan;
    sayi/=10;
   }
   printf("sayimizin tersi :%d dir",tersi);
    return 0;
}
