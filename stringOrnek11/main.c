#include <stdio.h>
#include <stdlib.h>

int main()
{
    char kelime[20];
    int i=0,j=0;

    printf("lutfen bir kelime giriniz: ");
    scanf("%c",&kelime);

    while(i<strlen(kelime)){
            j=0;
          while(j<=i){
            printf("%c",kelime[j]);
            j++;
          }
            printf("\n");
            i++;
    }

    return 0;
}
