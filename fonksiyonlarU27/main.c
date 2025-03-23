#include <stdio.h>
#include <stdlib.h>
//kullanici tarafindan derece olarak girilen bir degerin fahrenhayta, fayrenhayt olarak girilen bir degerin dereceye donusumunu saglayan program
// f=(1.8.c)+32       c=(5/9)*F-32

float celtofah(int derece){
int faho=1.8*derece+32;
return faho;
}
float fahtocel(int fr){
int celcu=(5.0/9)*(fr-32);
return celcu;
}




int main()
{
    int secim,cel,fah;
   printf("lutfen yapmak istediginiz islemi seciniz:\n");
   printf("secenekler:( cel to fah) icin 1 tusuna (fah to cel)icin 2 tusuna basiniz: ") ;
    scanf("%d",&secim);
    if(secim==1){
        printf("celcius degerini giriniz");
        scanf("%d",&cel);

        printf("%d celcius, %.2f fahrenhait degerine esittir",cel,celtofah(cel));
    }
    if(secim==2){
        printf("fahrenheit degerini giriniz");
        scanf("%d",&fah);

        printf("%d fahrenheit, %.2f celcius degerine esittir",fah, fahtocel(fah));

    }
    return 0;
}
