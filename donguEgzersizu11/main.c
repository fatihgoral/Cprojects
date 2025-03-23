#include <stdio.h>
#include <stdlib.h>
/*
kullanicidan pozitif bir sayi girmesini isteyiniz
girdiginiz sayinin karekokunu hesaplayin
girdiginiz sayi negatif ise kullanicinin yeni bir sayi girmesini isteyin
girdiginiz sayi 0 ise program calismayi durdurur
girdiginiz sayi pozitifse karekoku hesaplayip kullanicin yeni bir sayi girmesini isteyiniz
*/



int main()
{
    float x;
    do{
    printf("luten pozitif bir sayi giriniz");
    scanf("%f",&x);
    if(x<0){
        printf("lutfen pozitif bir sayi giriniz\n");
    }
    if(x<=0){
        continue;
    }
     printf("girdiginiz sayinin karekoku: %f\n",sqrt(x));

    }while(x);



    return 0;
}
