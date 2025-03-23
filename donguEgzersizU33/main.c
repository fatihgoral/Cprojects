#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int j,satir,sayi=1;
    printf("lutfen satir sayisin. giriniz");
    scanf("%d",&sayi);

      for(i=1;i<=satir;i++){
    for(j=1;j<=i;j++){
        printf("%d ",sayi);
        sayi++;

    }
    printf("\n");
}


    return 0;
}
