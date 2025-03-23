#include <stdio.h>
#include <stdlib.h>
/* kenar uzunluklari birbirinden farkli esklenar bir ucgenin alanin bulmasini saglayan c programinþ yaziniz
   u=(a+b+c)/2;
    Alan^2=u*(u-a)*(u-b)*(u-c);
    */
void alanhesapla(a,b,c){
float u=(a+b+c)/2;
float alan=sqrt(u*(u-a)*(u-b)*(u-c));
printf("verilen ucgenin alani:%.3f",alan);

    }

    int main()
{
    int x1,x2,x3;
 printf("kenar uzunluklarini giriniz: ");
 scanf("%d %d %d",&x1,&x2,&x3);
alanhesapla(x1,x2,x3);

    return 0;
}
