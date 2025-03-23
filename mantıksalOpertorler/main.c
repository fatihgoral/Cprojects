#include <stdio.h>
#include <stdlib.h>

int main()
{
   int x=25;
   int y=20;

   printf("%d\n",x<10 && y<30 );
   printf("%d\n",x<10 ||  y<30 );
   printf("%d\n",!(x<10 ||  x<30 )); // unlem isareti degili anlamýna gelir

    return 0;
}
