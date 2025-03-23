#include <stdio.h>
#include <stdlib.h>
 //kullanici tarafindan N pozitif tamsayisinin faktoriyelininin hesaplanmasini saglayan program
 int faktoriyel(int *sayi ){
   int sonuc=1;
   int i;
   for(i=*sayi;i>=1;i--) {

    sonuc*=(*sayi);
   (*sayi)--;
   }
   return sonuc;
   }
int main()
{

 int n,orjinalSayi;
 printf("lutfen faktoriyeli hesaplanacak sayiyi giriniz:\n");
 scanf("%d",&n);
 orjinalSayi=n;
 //Bu atamayý yapmazsak, faktöriyel hesaplamasýndan sonra n'in deðeri 1'e kadar azalýr.
 //Sonuç olarak, ekrana yazdýrýrken doðru sayýyý deðil, 1 deðerini kullanýrýz ve bu da hatalý bir sonuç olur
 printf("%d!=%d",orjinalSayi,faktoriyel(&n));

    return 0;
}
