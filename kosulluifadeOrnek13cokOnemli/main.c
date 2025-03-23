#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x=5;
    int y=10;
    int z=0;
    switch(x){
case 4:
    z=101;
    break;
case 5:
    switch(y){
case 10:
    z=102;
    break;
case 11:
    z=103;
    break;
default:
    z=104;
    }
   break ;
default :
    z=105;
    }
     // z'nin deðerini yazdýr
    printf("z'nin degeri: %d\n", z);
    return 0;
}
