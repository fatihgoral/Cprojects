#include <stdio.h>
#include <stdlib.h>

int main()
{
   int x,y,kucukSayi,ebob=0,ekok=0;
   printf("lutfen hesaplanacak sayilari giriniz : ");
   scanf("%d %d",&x,&y);
   if(x<y){
    kucukSayi=x;
   }
   else{
    kucukSayi=y;
   }
   for(int i=2;i<=kucukSayi;i++){
    if((x%i==0)&&(y%i==0)){
        ebob=i;
    }
   }
   if(ebob!=0){
    ekok=ebob*x/ebob*y/ebob;
    printf("ebob degeri: %d\n",ebob);
    printf("ekok degeri : %d\n",ekok);
   }
   else{
    printf("ebob degeri yoktur cunku ortak bir bolen yok\n");
    ekok=x*y;
    printf("ekok degeri : %d\n",ekok);
   }


    return 0;
}
