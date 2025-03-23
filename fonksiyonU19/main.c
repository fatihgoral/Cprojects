#include <stdio.h>
#include <stdlib.h>
void sirala(int arr[],int n){
    int gecici;
for(int i=0;i<n-1;i++){
    for(int j=0;j<n-1-i;j++){
        if(arr[j]>arr[j+1]){
            gecici=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=gecici;
        }
    }
}

}

int main()
{
  int adet;
   printf("lutfen sayi adedini giriniz: ");
   scanf("%d",&adet);
     int dizi[100];
     srand(time(0));
   for(int i=0;i<adet;i++){
    dizi[i]=rand()%100;
    printf("%4d",dizi[i]);
   }
   printf("\nDIZININ SIRALI HALI\n");
   sirala(dizi,adet);
   for(int i=0;i<adet;i++){
    printf("%3d",dizi[i]);
   }
    return 0;
}


