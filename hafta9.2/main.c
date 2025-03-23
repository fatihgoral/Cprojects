#include <stdio.h>
#include <stdlib.h>
int bul(
 int x1, int x2, int x3 )
{
int enbuyuk=x1;
 if(x2>enbuyuk){
    enbuyuk=x2;
 }
 if(x3>enbuyuk){
    enbuyuk=x3;
 }
return enbuyuk;
}
int main()
 {
    int s1, s2, s3;

    printf("1. sayiyi giriniz: ");
    scanf("%d", &s1);

    printf("2. sayiyi giriniz: ");
    scanf("%d", &s2);

    printf("3.sayiyi giriniz: ");
    scanf("%d", &s3);

    // Sayýlarý ekrana yazdýr
    printf("Girilen sayilar: \n");
    printf("s1 = %d\n", s1);
    printf("s2 = %d\n", s2);
    printf("s3 = %d\n", s3);
    printf("3 sayidan en buyuk sayi: %d",bul(s1,s2,s3));

    return 0;
}
