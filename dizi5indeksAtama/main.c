#include <stdio.h>
#include <stdlib.h>

int main()
{
    int mySquare[20];
    // indeks numarasinin karesini diziye atama
   for(int i=0;i<=20;i++){
     mySquare[i]=i*i;
    printf("mySquare[%d] : %d\n",i,mySquare[i]);

   }
    return 0;
}
