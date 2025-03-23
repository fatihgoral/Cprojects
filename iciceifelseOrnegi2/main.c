#include <stdio.h>
#include <stdlib.h>

int main() {
    int yas;
    float gelir, vergi;

    printf("Yasinizi girin: ");
    scanf("%d", &yas);

    printf("Yillik gelirinizi girin: ");
    scanf("%f", &gelir);
    if(yas>=18){
        if(gelir>=5000){
            vergi=gelir*0.20;
        }
            else{
                vergi=gelir*0.15;
            }
        }
  else{
    if(gelir>=5000){
            vergi=gelir*0.10;
        }
            else{
                vergi=gelir*0.05;
            }
  }
printf("%.1f tl olan gelirinizin vergisi %.1f TL'dir",gelir,vergi);
    return 0;
}

