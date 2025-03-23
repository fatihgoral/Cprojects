
#include <stdio.h>
#include <stdlib.h>

/*number of product
monday=2
tuesday=5
wednesday=7
thursday=10
friday=15
saturday=19
sunday=25
hangi gün girilirse o güne kadar satilan ürün sayisini gösteren program
*/

int main()
{
    int numberofProducts=0;
    int dayNumber=0;
    char *dayName;
    printf("lutfen gun numarasini giriniz 1 ile 7 arasinda olmasina dikkat ediniz....\n");
    scanf("%d",&dayNumber);
    if(dayNumber>7 || dayNumber<1 ){
        printf("gecersiz bir giris yaptiniz.\n");
        return 0;
    }


    switch (dayNumber){
        case 7: if(dayNumber==7){
        dayName="pazar";
        }
        numberofProducts+=25;

        case 6: if(dayNumber==6){
        dayName="cumartesi";
        }
        numberofProducts+=19;

        case 5: if(dayNumber==5){
        dayName="cuma";
        }
       numberofProducts+=15;

        case 4: if(dayNumber==4){
        dayName="persembe";
        }
        numberofProducts+=10;

        case 3: if(dayNumber==3){
        dayName="carsamba";
        }
       numberofProducts+=7;


        case 2: if(dayNumber==2){
        dayName="sali";
        }
        numberofProducts+=5;

        case 1: if(dayNumber==1){
        dayName="pazartesi";
        }
      numberofProducts+=2;
        }
printf("%s gunu sonunda toplam %d urun satisi yapildi \n",dayName,numberofProducts);
    return 0;
}

