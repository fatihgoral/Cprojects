#include <stdio.h>
#include <stdlib.h>

int main()
{
    char kelime[10];
    int i,j;

    printf("%s",&kelime);

    printf("lutfen bir kelime giriniz");
    scanf("%s",&kelime);


    for(i=0;strlen(kelime);i++){
        for(j=0;j<=i;j++){
            printf("%c",kelime[j]);
        }
    }



    return 0;
}
