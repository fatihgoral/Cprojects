#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*Bir topun x-y koordinat d�zlemindeki hareketi i�in a�a��daki yap� ve form�ller
    kullan�lmaktad�r.Topun t=0 an�ndan t=10 an�na kadar 0.1 sn lik zaman dilimlerinde
    x ve y koordinat de�erlerinin bulunmas�n� ve ekrana g�sterilmesini sa�layan C program�n�
    yaz�n�z.


    Form�ller

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
