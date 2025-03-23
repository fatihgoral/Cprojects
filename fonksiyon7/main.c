#include <stdio.h>
#include <stdlib.h>
void menu(){

printf("***************\n");
printf("*    menu   *\n");
printf("*             *\n");
printf("***************\n");

printf("1.tercih:buyuk deger bulma\n");
printf("2.tercih: kucuk deger  bulma\n");
printf("3.tercih kare alma\n");
printf("4.tercih kup alma\n");
printf("5.tercih mutlak deger alma\n");
}

int max(x,y){
if(x>y){
return x;
}else{
return y;
}


}
int min(x,y){
if(x<y){
    return x;
}else{
return y;
}

}
int kare(x){
    return x*x;
}
int kup(x){
  return x*x*x;
}
int mutlak(x){
    if(x<0){
   return x*(-1);
    }else{
        return x;
    }
}

int main()
{

int choose=0,x,y;
    menu();
    printf("please choose a number(1-5):\n");
    scanf("%d",&choose);
    printf("\n");

switch(choose){
case 1:
    printf("büyük sayiyi bulmayi sectiniz\n");
    printf("enter a two number ...");
    scanf("%d %d",&x,&y);
    printf("sonuc:",max(x,y));
    break;

case 2:
     printf("kucuk sayiyi bulmayi sectiniz\n");
    printf("enter a two number please ...");
    scanf("%d %d",&x,&y);
    printf("sonuc :",min(x,y));
    printf("\n");
    break;
case 3:
     printf("kareyi bulmayi sectiniz");
    printf("enter a number please..");
    scanf("%d",&x);
    printf("sonuc :",kare(x));
    printf("\n");
    break;
case 4:
     printf("küpü bulmayi sectiniz");
    printf("enter a number please..");
    scanf("%d",&x);
    printf("sonuc:",kup(x));
    printf("\n");
    break;
case 5:
     printf("mutlak deger almayi sectiniz");
    printf("enter a number please..");
    scanf("%d");
    printf("sonuc :",mutlak(x));
    printf("\n");

default :printf("you should have choosen a number between 1 and 5");
    }
    return 0;
}
