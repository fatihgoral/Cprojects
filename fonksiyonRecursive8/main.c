#include <stdio.h>
#include <stdlib.h>

int asalmi(int sayi,int i){
    if(i==1)
    {
        return 1;
    }
    else if(sayi%i==0){
        return 0;
    }else{
        asalmi(sayi,i-1);
    }
}


int main()
{
    int n,i,kontrol;
   printf("lutfen bir sayi giriniz");
   scanf("%d",&n);
 printf("asal sayilar :\n");
   for(i=2;i<n;i++){
   kontrol=asalmi(i,i/2);
  if(kontrol==1){
    printf("%d\n",i);
  }
   }
    return 0;
}
