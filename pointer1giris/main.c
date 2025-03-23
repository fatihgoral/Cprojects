#include <stdio.h>
#include <stdlib.h>

int main()
{
   int x=12;
   int* ptr=&x;
    printf("x degiskeni :%d\n",x);
     printf("x degiskeni :%d\n",*ptr);
     printf("x degiskeni adresi:%x\n",&x);
        printf("x degiskeni adresi:%x\n",ptr);
           printf("ptr degiskeni adresi:%x\n",&ptr);

    return 0;
}
