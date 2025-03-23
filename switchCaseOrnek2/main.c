#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    x==7? 19 :(y==12?10:-90);
    i
    */
    int x,y,z;
    x=8;
    y=12;
    switch(x){
  case 7:
    z=19;
    break;
  default:switch(y){
  case 12:
    z=10;
    break;
  default:
    z=-90;
  }

    }


printf("%d\n",z);
    return 0;
}
