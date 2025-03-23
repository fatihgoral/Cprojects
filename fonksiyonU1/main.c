#include <stdio.h>
#include <stdlib.h>
int ussunu_al(int a,int b){
    int sonuc=1;
for(int i=0;i<b;i++){
  sonuc=sonuc*a;
}
return sonuc;
}

int main()
{
    int taban,us,result;
printf("ussu alinacak sayi ile us degerini giriniz");
scanf("%d %d",&taban,&us);
result=ussunu_al(taban,us);
printf("%d",result);
/*

void ussunu_al(int a,int b,int *can){
 int i;
 *can=1;
 for(i=0;i<b;i++){
*can=*can*a;

}



int main()
{
    int taban,us,result;
printf("ussu alinacak sayi ile us degerini giriniz");
scanf("%d %d",&taban,&us);
ussunu_al(x,y,&sonuc);
printf("%d",result);




*/

    return 0;
}
