#include <stdio.h>
#include <stdlib.h>
// kullanicidan n tane sayi aliniz ve bu sayidan en buyuk ve en kucuk elemani bulunuz
// girdiginiz n degerinin 0 ile 100 arasðinda olmasina dikkat ediniz
int main()
{
    float sayi[100];
   int n,i;
   printf("kac tane sayi girmek istediginizi girebilir misiniz: ");
   scanf("%d",&n);

   while(n<0||n>100){
    printf("kac tane sayi girmek istediginizi girebilir misiniz: ");
    scanf("%d",&n);
   }
  for(i=0;i<n;i++){
    printf("%d. sayim : ",i+1);
    scanf("%f",&sayi[i]);

  }
for(i=1;i<n;i++){
   if(sayi[0]<sayi[i]) {
    sayi[0]=sayi[i];
   }
}
printf("en buyuk sayi: %.2f\n",sayi[0]);
for(i=1;i<n;i++){
   if(sayi[0]>sayi[i]) {
    sayi[0]=sayi[i];
   }
}
printf("en kucuk sayi : %.2f\n",sayi[0]);


    return 0;
}
