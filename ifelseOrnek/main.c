#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi1;
    int sayi2;
    printf("lutfen birinci sayiyi giriniz\n");
    scanf("%d",&sayi1);

    printf("lutfen ikinci sayiyi giriniz\n");
    scanf("%d",&sayi2);
    if (sayi1>sayi2){
       printf("birinci sayi ikinci sayidan daha buyuktur");
    }
    else if (sayi1==sayi2){
    printf("birinci sayi ikinci sayiya esittir");
    }
      else{
       printf("birinci sayi ikinci sayidan kucuktur ");
      }



    return 0;
}
