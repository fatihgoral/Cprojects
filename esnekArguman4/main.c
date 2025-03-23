#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <math.h>

//esnek arguman polinnom problemi
// px=ax^3+bx^2+cx+d
double p(int N,double x,...){
double sonuc=0.0;
va_list listem;
va_start(listem,N);
for(int i=0;i<N;i++){
    sonuc+=va_arg(listem,double)*pow(x,i);
}    va_end(listem); // va_list'i sonlandýrmayý unutmayýn


return sonuc;


}




void main()
{
  printf("p(3.2)=%lf\n",p(4,3.2,1.1,2.2,3.3,4.4));

    return 0;
}
