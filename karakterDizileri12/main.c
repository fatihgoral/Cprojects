#include <stdio.h>
#include <stdlib.h>
// iki boyutlu bir dizi olusturun
//dizinin elemanlari iki,uc,dort,bes olsun
// dizinin 4. elemaninin 3.karakterini ekrana bastirin
int main()
{
char can[100][100]={{'b','i','r','\0'},"iki","uc","dort"};
printf("dizimin dorduncu elemani :%s\n",can[3]);
printf("dizimizin dorduncu elemaninin ucuncu karakteri: %c\n",can[3][2]);
    return 0;
}
