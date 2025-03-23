#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=2;
    int b=3;
    int c=20;
    int d=5;
    int n=7;

   for(int i=1;i<=n;i++){
    b*=2;
    a+=i;
    --c;
    d++;
   }

   //  en son güncel hali
   printf("a degeri: %d\n",a);
   printf("b degeri: %d\n",b);
   printf("c degeri: %d\n",c);
   printf("d degeri: %d\n",d);


    return 0;
}
