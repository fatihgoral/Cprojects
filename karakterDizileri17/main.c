#include <stdio.h>
#include <stdlib.h>

int main()
{
     char cumle[200];
   int i=0;

   printf("lutfen metini giriniz: ");
   fgets(cumle,200,stdin);

   while(cumle[i]){
        printf("%c\n",cumle[i]);
    i++;
   }
    return 0;
}
