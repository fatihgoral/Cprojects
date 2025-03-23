#include <stdio.h>
#include <stdlib.h>

int main()
{
   int dizi[5];
   dizi[0]=12;
   dizi[1]=34;
   dizi[2]=65;
   dizi[3]=98;
   dizi[4]=125;

   int numbers[5]={234,445,78,234,986};


   for(int i=0;i<5;i++){
   printf("%d\n",dizi[i]);
   }
   printf("**********************************\n");
   for(int i=0;i<5;i++){
   printf("%d\n",numbers[i]);
   }


    return 0;
}
