#include <stdio.h>
#include <stdlib.h>
//klavyeden girilen N adet tam sayinin bellekten  yer ayýrarak yazýlmasýný ve bellekten
//okutularak toplamýný ve ortalamasýný hesaplayarak yazan  c programin yaziniz

int main()
{
   int*ptr;
   int N;
   int i;
   int toplam=0;
   float ortalama;

   printf("lutfen eleman sayisini giriniz:");
   scanf("%d",&N);

   ptr=(int*)calloc(N,sizeof(int));
   for(i=0;i<N;i++){
    printf("%d. sayi ",i+1);
    scanf("%d",ptr+i);
    toplam+=*(ptr+i);
   }
   ortalama=toplam/N;

    printf("toplam sonucu :%d\n",toplam);
    printf("ortalama sonucu : %.2f\n",ortalama);
    return 0;
}
