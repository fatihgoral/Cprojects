#include <stdio.h>
#include <stdlib.h>
// bundan hemen onc üüe yazdigimiz ternary ifadenin if else ile yazilisi

int main()
{
    int x=5;
    int y=10;
    int z=0;
   if(x==4)
    z=101;
   else
    if(x==5)
    if(y==10)
        z=102;
    else
    if(y==11)
        z=103;
   else
        z=104;

   else
        z=105;
   printf("Z'nin degeri : %d",z);


    return 0;
}
