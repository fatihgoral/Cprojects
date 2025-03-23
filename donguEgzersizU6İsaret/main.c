#include <stdio.h>
#include <stdlib.h>
/* while dongusu kullanarak 0 ile kullanicidan aldigi n sayisi arasinda yer alan 17'nin tüm tamsayi katlarini bastiran program
programinizi cýktý verirken her satirda 10 adet sayi olacak sekilde düzenleyiniz
*/

int main()
{
int limit,i,satirelemani;
printf("lutfen limit degerini giriniz");
scanf("%d",&limit);
i=0;
satirelemani=0;
while(i<=limit){
    if(i%17==0){
        printf("%5d",i);
        satirelemani++;

if(satirelemani%10==0){
    printf("\n");
}
    }
i++;
}
    return 0;
}
