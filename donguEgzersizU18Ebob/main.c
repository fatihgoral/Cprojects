#include <stdio.h>
#include <stdlib.h>

int main()
{
  int sayi1,sayi2,i,gecici,ebob;
  printf("lutfen 2 adet sayi giriniz:");
  scanf("%d %d",&sayi1,&sayi2);

  if(sayi2>sayi1){
    gecici=sayi2;
    sayi2=sayi1;
    sayi1=gecici;

  }
  for(i=1;i<sayi2;i++){
    if(sayi1%i==0 && sayi2%i==0){
        ebob=i;
    }
  }
 printf("ebob degerim:%d",ebob);

    return 0;
}
