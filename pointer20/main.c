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
 //Bu atamay� yapmazsak, fakt�riyel hesaplamas�ndan sonra n'in de�eri 1'e kadar azal�r.
 //Sonu� olarak, ekrana yazd�r�rken do�ru say�y� de�il, 1 de�erini kullan�r�z ve bu da hatal� bir sonu� olur
 printf("%d!=%d",orjinalSayi,faktoriyel(&n));

    return 0;
}
