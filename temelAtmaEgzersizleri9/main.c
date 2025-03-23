#include <stdio.h>
#include <stdlib.h>
// ortalama hiz sorusu
// bir arabanin ankaradan istanbul 450km'a varýþ zamani
// saat cinsinden girdiolarak alan ve arabanin ortalaam hizini hesaplayan bir c programi yazin
int main()
{
    float sure,ortalamaHiz;
    printf("lutfen gidiste gecen süreyi saat cinsinden giriniz: ");
    scanf("%f",&sure);

    ortalamaHiz=450/sure;
    printf("ortalama hiz degeri : %.2f",ortalamaHiz);


    return 0;
}
