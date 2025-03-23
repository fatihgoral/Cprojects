#include <stdio.h>
#include <stdlib.h>
// bir string ifadeyi bir string ifadeye kopyalama

int main()
{

   char ilk[100],ikinci[100];
   printf("ilk kelimeyi giriniz\n");
   scanf("%s",ilk);

   strcpy(ikinci,ilk);

   printf("ilk kelime :%s\n",ilk);
   printf("ikinci kelime : %\s\n ",ikinci);





    return 0;
}
