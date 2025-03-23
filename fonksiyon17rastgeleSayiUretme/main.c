#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,number=0;
    srand(time(NULL));
    for(i=0;i<10;i++){
       number=rand()%6+1;
       printf("%d.rast gele sayi: %d\n",i,number);
    }

    return 0;
}
