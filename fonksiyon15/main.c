#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    // is grater eger ilk deger ikinciden b�y�kse true yani 1 d�nd�r�r..
    double x=19.50,y=7.80,z=7.14/0.00;
    printf("%.2f degeri %.2f degerinden buyuk bir deger :%s\n",x,y,isgreater(x,y)?"dir":"degildir");


    return 0;
}
