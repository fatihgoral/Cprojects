#include <stdio.h>
#include <stdlib.h>
// klavyeden girilen 2 sayinin toplamibi fonksiyonla bulan program
void topla(int a, int b){
int toplam=a+b;
 printf("toplam sonucu %d",toplam);
}
int main(){
int s1,s2;
printf("lutfen 2 sayi giriniz: ");
  scanf("%d %d",&s1,&s2);
topla(s1,s2);
    return 0;
}
/*

int topla(int a,int b){
return a+b;
}

int main()
{
    int s1,s2;
  printf("lutfen 2 sayi giriniz: ");
  scanf("%d %d",&s1,&s2);

 printf("sayilarin toplami:%d",topla(s1,s2));


    return 0;
}
*/
