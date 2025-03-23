#include <stdio.h>
#include <stdlib.h>

//disaridan arraye girilecek eleman sayisi girilsin ve bu sonra array sayilarini girsin.
//bunun sonucunda tek sayilarla cift sayilari ayrýi yri ekrana yazdir
int main()
{
    int lastNumber;
    int numbers[100];   // burda c kabul etmedigi icin 100 yazdik aklin karismasin
    printf("enter a last number : ");
    scanf("%d",&lastNumber);

    for(int i=1;i<=lastNumber;i++){
    printf("%d. sayi : ",i);
    scanf("%d",&numbers[i]);
    }

    printf("\n even Number : ");
    for(int j=1;j<=lastNumber;j++){
            if(numbers[j]%2==0){
                printf("%-5d",numbers[j]);
            }
    }
    printf("\n odd Number : ");
    for(int k=1;k<=lastNumber;k++){
            if(numbers[k]%2==1){
                printf("%-5d",numbers[k]);
            }
    }




    return 0;
}
