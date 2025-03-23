#include <stdio.h>
#include <stdlib.h>
// kullanicidan girmesini istedigi a,b,c ve x degerlerini kullanarak
//asagidaki aritmetik islemiin sonucunu hesaplayan ve ekrana bastiran C programini yaziniz
//ax^2 +b^x+c=?*
int main()
{
    int a,b,c,x,islem;
    printf("lutfen katsayilar olan a,b,c degerlerini giriniz");
    scanf("%d %d %d",&a,&b,&c);

   printf("lutfen x degerini giriniz");
   scanf("%d",&x ) ;
   islem=2*(x*x)+ b*x+ c;
   printf("islem sonucu:%d",islem);



    return 0;
}
