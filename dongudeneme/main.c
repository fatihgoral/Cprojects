#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sharp;
    int i,j;
    printf("deger giriniz");
    scanf("%d",&sharp);

    for(i=0;i<sharp;i++){
        for(j=1;j<=sharp-i;j++){
            printf("%d",j);

  }
  printf("\n");
    }



    return 0;
}
