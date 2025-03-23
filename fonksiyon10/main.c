#include <stdio.h>
#include <stdlib.h>
void fahtoCel(int number1);
void celtoFeh(int number2);

int main()
{
int number1,number2;
char choose;

    printf("lutfen bir secim yapiniz\n");
    printf("eger celciustan fahrenheite gecmek istiyorsaniz f'yi seciniz\n");
    printf("fahrenheitten celciusa gecmek istiyorsaniz c'yi seciniz\n");
   scanf(" %c",&choose);

    switch(choose){
   case 'c':printf("celcius degerini girin :\n ");
   scanf("%d",&number1);
   celtoFeh(number1);
break;

   case'f':printf("lutfen fahrenheit degerini giriniz\n");
   scanf("%d",&number2);
   fahtoCel(number2);
break;
default: printf("gecerli bir harf degerini giriniz:(c or f)");
    }

    return 0;
}


void fahtoCel(int number1){
 int result=((number1-32)*5/9);
printf("\n%d fahreheit degeri %d celcius degerine esittir\n",number1,result);
}
void celtoFeh(int number2){
   int  result=(number2*9/5)+32;
 printf("\n%d celcius degeri %d fahrenheit degerine esittir\n",number2,result);
}





