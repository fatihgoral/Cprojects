#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// bilgisayar tarafýndan rastgele uretilen N adet sayi bir dizide tutulmakadýr dizi icerisindeki maksimum ve minimum degerleri iki ayrý fonk kullanarak bulunuz
int enBuyukbul(int arr[],int elemansayisi){
    int enb=arr[0];
 for(int i=0;i<elemansayisi;i++){
    if(arr[i]>enb){
    enb=arr[i];
 }
 }
return enb;
}

int enKucukbul(int arr[],int elemansayisi){
   int  enk=arr[0];
 for(int i=0;i<elemansayisi;i++){
    if(arr[i]<enk){
    enk=arr[i];
 }
 }
return enk;
}



int main()
{
    int n;
 printf("kac adet sayi uretilecek");
 scanf("%d",&n);
   int dizi[n];
 srand(time(0));
 printf("dizi elemanlari: ");
 for(int i=0;i<n;i++){
     dizi[i]=rand()%100;
    printf("%3d",dizi[i]);
 }
 printf("\n");

 printf("en buyuk eleman:%d\n",enBuyukbul(dizi,n));
  printf("en kucuk eleman:%d\n",enKucukbul(dizi,n));

    return 0;
}
