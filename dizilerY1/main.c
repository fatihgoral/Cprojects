#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// 100 kere atýlan bir zarin her bir degerinden kac kere geldigini bulan program
// rand() kullanarak bul

int main()
{
    int i;
    int zar;
    srand(time(NULL));

    int kacTane[7]={0,0,0,0,0,0,0};

    for(i=0;i<100;i++){
      zar= rand()%6+1;
        kacTane[zar]++;
    }
    for(i=1;i<7;i++){
printf("%d----->%d\n",i,kacTane[i]);
    }






    return 0;
}

