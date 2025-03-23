#include <stdio.h>
#include <stdlib.h>

int main()
{
    // girilen 3 sayinin en buyugunu bulan program
   int sayi1;
    int sayi2;
    int sayi3;

    printf("lutfen birinci sayiyi giriniz\n");
    scanf("%d",&sayi1);

    printf("lutfen ikinci sayiyi giriniz\n");
    scanf("%d",&sayi2);

  printf("lutfen ucuncu sayiyi giriniz\n");
    scanf("%d",&sayi3);
/*
sadece if yapýsý ile bulma
   if (sayi1>sayi2&& sayi1>sayi3){
       printf("1. sayi en buyuktur");
    }
    if (sayi2>sayi1&& sayi2>sayi3){
    printf("2. sayi en buyuktur");
    }
      if( sayi3>sayi1&& sayi3>sayi2){

       printf("3. sayi en buyuktur");
      }

if(sayi1==sayi2&& sayi1==sayi3){
        printf("3 sayi birbirine esittir");
}
*/
 if (sayi1>sayi2&& sayi1>sayi3){  // if else if else yapýsý ile bulma
       printf("1. sayi en buyuktur");
    }
    else if (sayi2>sayi1&& sayi2>sayi3){
    printf("2. sayi en buyuktur");
    }
     else if( sayi3>sayi1&& sayi3>sayi2){

       printf("3. sayi en buyuktur");
      }

else{
      printf("3 sayi birbirine esittir");
}

    return 0;
}
