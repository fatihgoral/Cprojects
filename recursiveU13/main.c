#include <stdio.h>
#include <stdlib.h>
// klavyeden girilen N pozitif tamsayisina kadar olan sayilarin faktoriyelinş hesaplanmasini saglyann c kodunu yaziniz
int fakthesap(int n){
if(n==1||n==0){
    return 1;
}else{
return n*fakthesap(n-1);
}

}
int main()
{
    int sayi;
    int sonuc;
    printf("lutfen bir sayi giriniz: ");
    scanf("%d",&sayi);

    sonuc=fakthesap(sayi);
    printf("%d!=%d",sayi,fakthesap(sayi));

    return 0;
}
