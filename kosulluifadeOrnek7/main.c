#include <stdio.h>
#include <stdlib.h>

int main()
{
   int anaSecim;
   int detaySecim;

   printf("lutfen yiyecek istiyorsaniz 1 icecek istiyorsaniz 2 ye basiniz\n");
   scanf("%d",&anaSecim);
   switch(anaSecim){
   case 1 :
   printf("lutfen detayli secimi 1 ile 3 arasindaki rakamlardan secerek yapiniz\n");
   printf("1 numarada hamburger 2 numarada kebap 3 numarada tavuk döner vardir\n ");
   scanf("%d",&detaySecim);
   switch(detaySecim){
   case 1 :
     printf("hamburger sectiniz:\n");
     break;
    case 2 :
     printf("kebap sectiniz:\n ");
   break;
     case 3 :
     printf("tavuk döner sectiniz:\n ");
     break;
     default:
        printf("hatali secim yaptiniz\n");
   }
break;

   case 2:
printf("lutfen detayli secimi 1 ile 3 arasindaki rakamlardan secerek yapiniz\n");
   printf("1 numarada ayran 2 numarada kahve 3 numarada gazoz vardir\n");
   scanf("%d",&detaySecim);
   switch(detaySecim){
   case 1 :
     printf("ayran sectiniz\n");
  break;
    case 2 :
     printf("kahve sectiniz\n ");
    break;
     case 3 :
     printf("gazoz sectiniz\n ");
     break;
     default:
        printf("hatali secim yaptiniz\n");
 }
 break;
     default:
         printf("hatali secim yaptiniz\n");
   }

    return 0;
}
