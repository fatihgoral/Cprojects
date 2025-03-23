#include <stdio.h>
#include <stdlib.h>
// kullanici tarafindan girilen A ve B dizilerine sirasiyla N ve K adet tamsayi girilmektedir
// bu iki dizinin birlestirelerek tek bir dizi haline getirilmesini saglayan C programini yazibiz

void birlestir(int A[],int B[],int C[],int X,int Y)
{
   int sayac=0;
   int i,j;
   for(i=0;i<X;i++)
   {
       C[sayac]=A[i];
       sayac++;
   }
    for(j=0;j<Y;j++){
        C[sayac]=B[j];
        sayac++;
    }

}




int main()
{
 int k,n,i;
printf("ilk dizimizin eleman sayisini giriniz\n");
scanf("%d",&n);
int A[n];
for(i=0;i<n;i++){
        printf("%d. sayi: ",i+1);
    scanf("%d",&A[i]);
}

printf("ikinci dizimizin eleman sayisini giriniz");
scanf("%d",&k);
int B[k];
   for(i=0;i<k;i++){
        printf("%d. sayi: ",i+1);
    scanf("%d",&B[i]);
   }
int birlesik[n+k];
birlestir(A,B,birlesik,n,k);
 for(i=0;i<n+k;i++){
    printf("%d  ",birlesik[i]);

 }

    return 0;
}
