#include <stdio.h>
#include <stdlib.h>
// bilgisayara tarafindan rastgele uretilen N adet sayi bir dizide tutulmaktadir
// dizi icerisinde dizi sira numarasi belirterek klavyeden alinan bir tamsayinin
// ilgili siraya eklenmesinin saglayan bir c programinþ fonksiyon olarak yaziniz
void ekle(int A[],int sirano,int deger,int elemansayisi){
int i;
if(sirano<=elemansayisi+1){
    for(int i=elemansayisi-1;i>=sirano-1;i--){
            A[i+1]=A[i];
    }
   A[sirano-1]=deger;

printf("dizimizin eklenmis hali\n");
for(i=0;i<=elemansayisi;i++){
    printf("%d\n",A[i]);
}

}else{
    printf("gecerli bir sira numarasi giriniz");
}
}

int main()
{
   int i,sirasi;
   int n,deger;
   printf("kac adet elenman uretilecek");
   scanf("%d",&n);
   int dizi[n];
   srand(time(0));
   for(i=0;i<n;i++){
    dizi[i]=rand()%100;
   }
   for(i=0;i<n;i++){
    printf("%d\n",dizi[i]);
   }
   printf("hangi siraya eleman eklenecek");
   scanf("%d",&sirasi);
   printf("eklenecek sayi nedir");
   scanf("%d",&deger);
   ekle(dizi,sirasi,deger,n);
    return 0;
}


