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


 if (sayi1>sayi2)
       printf("%d > %d",sayi1,sayi2);

    else if (sayi2>sayi1)
     printf("%d > %d",sayi2,sayi1);

else
      printf("%d ==%d",sayi1,sayi2);


    return 0;
}
