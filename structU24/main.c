#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*Bir topun x-y koordinat düzlemindeki hareketi için aþaðýdaki yapý ve formüller
    kullanýlmaktadýr.Topun t=0 anýndan t=10 anýna kadar 0.1 sn lik zaman dilimlerinde
    x ve y koordinat deðerlerinin bulunmasýný ve ekrana gösterilmesini saðlayan C programýný
    yazýnýz.


    Formüller

    x=20-6cos(t);
    y=15+2sin(t);

    */
    struct koordinat{
    float x;
    float y;
    };

int main()
{
    struct koordinat top;

float t;
for(t=0.0;t<=10.0;t+=0.1){
    top.x=20-6*cos(t);
    top.y=15+2*sin(t);
  printf("x: %.2f \t y:%.2f\n",top.x,top.y);
}






    return 0;
}
