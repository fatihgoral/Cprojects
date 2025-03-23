#include <stdio.h>
#include <stdlib.h>
// kullacidan bir sayi girmesini iste ve 1+ 1/2+ 1/3 + 1/n
int main()
{
    int n;
    float sonuc;
do{

printf("lutfen bir sayi giriniz ");
scanf("%d",&n);
}while(n<1);
for(int i=1;i<=n;i++){
    sonuc+=(float)1/i;
}
printf("sonuc:%.2f",sonuc);

    return 0;
}
