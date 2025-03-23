#include <stdio.h>
#include <stdlib.h>
#define MAX 15
int main()
{
       char dizi[MAX] = {'k', 'a', 'b', 'a', 'k', 'e', 'l', 'm', 'a', 'r', 't', 'a', 'l', 'e', 'r'};
       char dizi_kopya[MAX];
       char *ptr1;
       char *ptr2;
       int i;

       ptr2=dizi_kopya;
   for(ptr1=dizi;ptr1<dizi+MAX;ptr1++){
       *ptr2=*ptr1;
       ptr2++;
   }
    printf("orjinal hali:\n");
    for(i=0;i<MAX;i++){
  printf("%3c",*(dizi+i));
    }
    printf("\n\n");
    printf("kopyalanmis hali: \n");
    for(i=0;i<MAX;i++){
  printf("%3c",*(dizi_kopya+i));
    }


    return 0;
}
