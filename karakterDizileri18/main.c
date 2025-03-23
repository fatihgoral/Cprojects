#include <stdio.h>
#include <stdlib.h>

int main()
{
  char kelime[30];
  int i=0,j=0;
  printf("lutfen bir kelime giriniz\n");
  scanf("%s",&kelime);

  while(i<strlen(kelime)){
        j=0;
    while(j<=i){
        printf("%c ",kelime[j]);
        j++;
    }
    printf("\n");
    i++;
  }
    return 0;
}
