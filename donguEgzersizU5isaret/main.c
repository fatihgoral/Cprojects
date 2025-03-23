#include <stdio.h>
#include <stdlib.h>
// kullanici tarafindan girilen 2 tam sayinin carpiminin pozitif mi negatif mi veya 0 oldugunu
// sayilarin carpmadan bulan c programini yaziniz
int main()
{
    int a,b;
   printf("Lutfen carpmak istediginiz 2 sayiyi giriniz ");
   scanf("%d %d",&a,&b);
  if((a>0&&b>0) || (a<0&&b<0)){
    printf("carpim pozitiftir");
  }
else if((a>0&&b<0) || (a<0&&b>0)){
    printf("carpim negatiftir");
}
else{
    printf("carpim 0'dir");
}
    return 0;
}
