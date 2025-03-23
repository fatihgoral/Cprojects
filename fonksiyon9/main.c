#include <stdio.h>
#include <stdlib.h>
void birlikCevir(int);
void onlukCevir(int);

int main()
{
int number=0,d1,d2,d3,d4;
while(number!=-1){
    printf("enter a digit number :");
    scanf("%d",&number);
    if(number==-1)break;
    d1=number%10;// birler
    d2=(number%100)/10;//onlar
    d3=(number%1000)/100; // yüzler
    d4= number/1000; //binler
       if(d4!=0){
        if(d4==1){
            printf(" bin ");
        }else{
        birlikCevir(d4);
        printf(" bin ");
        }
       }

    if(d3!=1){
        birlikCevir(d3);
    }if(d3!=0){
 printf(" yuz ");
    }
   onlukCevir(d2);
   printf(" ");
       birlikCevir(d1);
       printf("\n\n");
    }

    return 0;
}
void birlikCevir(int number){
    switch(number){
    case 1:printf("bir");break;
    case 2: printf("iki");break;
    case 3: printf("uc");break;
    case 4: printf("dort"); break;
    case 5: printf("bes"); break;
    case 6: printf("alti"); break;
    case 7: printf("yedi");break;
    case 8 : printf("sekiz");break;
    case 9: printf("dokuz");break;
    }
}
void onlukCevir(int number){
switch(number){
case 1: printf("on"); break;
case 2: printf("yirmi"); break;
case 3 :printf("otuz"); break;
case 4: printf("kýrk"); break;
case 5: printf("elli"); break;
case 6: printf("altmis"); break;
case 7: printf("yetmis");break;
case 8 : printf("seksen");break;
case 9: printf("doksan");break;
}
}


