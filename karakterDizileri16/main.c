#include <stdio.h>
#include <stdlib.h>

int main()
{
   char cumle[100];
   int i=0;
   int sayac=0;
   printf("lutfen metini giriniz: ");
   fgets(cumle,200,stdin);

   while(cumle[i]!=0){
    if(cumle[i]==' '){
        sayac++;
    }
    i++;

   }
   printf("girilen metindeki kelime sayisi : %d",sayac+1);// bosluk sayisi+ 1
    return 0;
}
