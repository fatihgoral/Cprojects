#include <stdio.h>
#include <stdlib.h>
# define PI 3
union daire{
float cevre;
float alan;
};


int main()
{
    float r;
    // yaricap degerini 3 alarak ve union konusuyla dairenin alaný ve cevresini hesaplayin
    union daire hesap;

    printf("lutfen yaricap degerini giriniz");
    scanf("%f",&r);
    hesap.cevre=2*PI*r;
        printf("dairenin cevresi:%.2f\n\n",hesap.cevre);

    hesap.alan=PI*pow(r,2);
    printf("dairenin alani:%.2f\n",hesap.alan);



    return 0;
}
