#include <stdio.h>
#include <stdlib.h>
/* while dongusu kullanarak 0 ile kullanicidan aldigi n sayisi arasinda yer alan 17'nin t�m tamsayi katlarini bastiran program
programinizi c�kt� verirken her satirda 10 adet sayi olacak sekilde d�zenleyiniz
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
