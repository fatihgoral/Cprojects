#include <stdio.h>
#include <stdlib.h>
//kullanicidan int tipinde bir diziznin degerlerini girmesini isteyin
//2 pointer kullanarak girdiginiz dizi elemanlarini bastan sona yrini
//degistirenn bir c programi yaziniz
int main()
{
  int arr[5];
  int*sayi1,*sayi2;
  int n;
  int i;
  printf("lutfen dizimizin eleman sayisini giriniz:");
  scanf("%d",&n);
  for(sayi1=arr;sayi1<=arr+n-1;sayi1++){
    printf("lutfen eleman giriniz:\n");
    scanf("%d",sayi1);
  }
  printf("dizimizin ilk hali\n");
  for(sayi1=arr;sayi1<arr+n;sayi1++){
    printf("%4d",*sayi1);
  }
  printf("\n");
  for(sayi1=arr,sayi2=arr+n-1;sayi1<sayi2;sayi1++,sayi2--){
int gecici=*sayi1;
  *sayi1=*sayi2;
  *sayi2=gecici;
  }
printf("dizimizin elemanlari yer degistirdikten sonra:\n");
for(sayi1=arr;sayi1<arr+n;sayi1++){
    printf("%4d",*sayi1);
}
printf("\n");
    return 0;
}

