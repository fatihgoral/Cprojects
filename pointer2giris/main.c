#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    y, x'in bellekteki adresini isaret eder. *y kullanilarak bu adresteki degeri degistirirseniz,
    x'in kendisi ve z gostergesi de bu degisiklikten etkilenir cunku
     hepsi ayni bellekteki degeri paylasir.
    */

   double x=3.14;
   double* y=&x;
   double* z=&x;
   printf("y: %f\n",*y);
   printf("z:%f\n\n",*z);
   *y=21.18;
   printf("z:%f\n\n",*z);
   printf("y:%f\n\n",*y);
printf("x:%f\n\n",x);
 return 0;


}
