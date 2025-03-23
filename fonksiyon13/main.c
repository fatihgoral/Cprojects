#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
   double x=7.12, y=1.75,z=5.80 ,result,result2;
   result=fmax(x,y);
   result2=fmin(x,z);
   printf("sonuc : %.2f",result );



    return 0;
}
