#include <stdio.h>
#include <stdlib.h>

int main()
{
    int taban,us;
    int sonuc=1;
    printf("taban degerini giriniz");
    scanf("%d",&taban);

    printf("us degerini giriniz");
    scanf("%d",&us);

    while(us!=0){
       sonuc=sonuc*taban;
       us--;
    }
  printf("%d ussu %d = %d",taban,us,sonuc);


    return 0;
}
