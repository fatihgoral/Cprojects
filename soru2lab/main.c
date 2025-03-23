#include <stdio.h>
#include <stdlib.h>

int main()
{
    float avarage;
    int s1,s2,s3,s4,s5;
    int sum=0;

    printf("birinci kisinin yasini giriniz: ");
    scanf("%d",&s1);
    sum+=s1;

    printf("ikinci kisinin yasini giriniz: ");
    scanf("%d",&s2);
    sum+=s2;

    printf("ucuncu kisinin yasini giriniz: ");
    scanf("%d",&s3);
    sum+=s3;

    printf("dorduncu kisinin yasini giriniz: ");
    scanf("%d",&s4);
    sum+=s4;

    printf("besinci kisinin yasini giriniz: ");
    scanf("%d",&s5);
    sum+=s5;

   avarage=sum;
   avarage/=5;

   printf("5 sayinin ortalama degeri %.1f dir",avarage);
    return 0;
}
