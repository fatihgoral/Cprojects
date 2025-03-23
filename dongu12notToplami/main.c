#include <stdio.h>
#include <stdlib.h>

int main()
{
   // girilen notlari toplayip ortalamasini alan program

   int i;
   float examGrade,sumGrade,avarage;
   i=1;
   examGrade=0.0;
   sumGrade=0.0;
   avarage =0.0;
   do{
        printf("%dth exam grade :",i);
    scanf("%f",&examGrade);
   if(examGrade==0){
    break;
   }
    if(examGrade<0){
        printf("please enrter a pozitive number\n");
    continue;
    }else{
    sumGrade+=examGrade;
    }
   i++; // Bu ifade yalnizca geçerli not girildiginde çalisiyor
   }while(examGrade!=0); // continue ifadesinden sonra bu kobul degerlendirilir
   if((i-1)==0){// i-1 yazmamizin sebebi 0 not olak sayilmiyor
   avarage=0.0;
   }else{
   avarage=sumGrade/(i-1);
   }

   printf("\nyou entered %d exam grade\n",i-1);
   printf("average :%f\n",avarage);
    return 0;
}
