#include <stdio.h>
#include <stdlib.h>

int main()
{
int x=255;

int *ptr=&x;
printf("x      :%d\n",&x);
printf("ptr   : %d\n",ptr);
printf("&ptr  : %d\n",&ptr);
printf("*ptr  : %d\n",*ptr);
x=33;
printf("ptr  : %d\n",*ptr);
*ptr=57;
printf("x : %d\n",x);


    return 0;
}
