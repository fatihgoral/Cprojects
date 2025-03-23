#include <stdio.h>
#include <stdlib.h>
// kullanicidan n tane sayi aliniz ve bunlarin ortalamasini bulunuz
// girdiginiz n degerinin 0 ile 100 arasinda olmasina dikkat ediniz
int main()
{
    float dizi[100];
    int i;
    int n;

  do{
    printf("kac elemanli dizi istiyorsunuz giriniz: ");
    scanf("%d",&n);
  }while(n<0 || n>100);

  for(i=0;i<n;i++){
    printf("%d. sayiyi giriniz: ",i+1);
    scanf("%f",&dizi[i]);
  }

  for(i=0;i<n;i++){
   if(dizi[i]>dizi[0]){
    dizi[0]=dizi[i];
   }
  }
  printf("en buyuk elemanim : %.1f\n",dizi[0]);

  for(i=0;i<n;i++){
    if(dizi[i]<dizi[0]){
      dizi[0]=dizi[i];
    }
  }
  printf("en kucuk elemanim:%.1f\n",dizi[0]);


  return 0;
}

