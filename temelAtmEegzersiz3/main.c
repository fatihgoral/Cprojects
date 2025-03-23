#include <stdio.h>
#include <stdlib.h>

// kullanicidan aldýgý tam sayi kenar uzunluklari (a,b) ve yukseklik
//bilgisini kullanarak bir dikdortgen prizmasýnýn sýrasýyla taban alanýný yanal alanlarinin toplaminþ
//toplam alanini ve hacmini ekrana bastiran C kodunu yaziniz
int main()
{
    int k1,k2,h;

  printf("lutfen prizmanýnýn kenar uzunluklarini giriniz:");
  scanf("%d %d",&k1,&k2);
   printf("lutfen yukseklik degerini giriniz : ");
   scanf("%d",&h);

   int tabanalan=k1*k2;
   int yanalalan=2*h*(k1+k2);
   int toplamalan=2*tabanalan+yanalalan;
   int hacim=k1*k2*h;

   printf("taban alan: %d\n",tabanalan);
   printf("yanal alan :%d\n",yanalalan);
   printf("toplam alan : %d\n",toplamalan);
   printf("hacim :%d\n ",hacim);





    return 0;
}
