#include <stdio.h>
#include <stdlib.h>

int topla(int sayi){
if(sayi==1){
 return 1;
}
  else{
     return sayi+topla(sayi-1);
  }
}
int main()
{
    /*klavyeden girilen bir N pozitif tamsayisina kadar olan sayilarin toplanarak
    sonucun ekrana gösterilmesini saglayan c programini yaziniz...
    */
    int n;
    printf("bir sayi giriniz: ");
    scanf("%d",&n);
   printf("toplam sonucu: %d",topla(n));
    return 0;
}
