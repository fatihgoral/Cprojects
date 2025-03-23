#include <stdio.h>
#include <stdlib.h>
// kullanicidan n tane sayi aliniz ve bunlarin ortalamasini bulunuz
// girdiginiz n degerinin 0 ile 100 arasinda olmasina dikkat ediniz
int main()
{
    float dizi[100];
    int i;
    float ortalama;
    int n;
    float toplam;
  do{
    printf("kac elemanli dizi istiyorsunuz giriniz: ");
    scanf("%d",&n);
  }while(n<0 || n>100);

  for(i=0;i<n;i++){
    printf("%d. sayiyi giriniz: ",i+1);
    scanf("%f",&dizi[i]);
  }
  for(i=0;i<n;i++){
   toplam+=dizi[i];
  }
  ortalama=toplam/n;
  printf("ortalama sonucu::%.2f",ortalama);
    return 0;
}
