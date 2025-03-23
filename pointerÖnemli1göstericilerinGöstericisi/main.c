#include <stdio.h>
#include <stdlib.h>


int main()
{
int x=1;
int y=2;
int *p =NULL; // *p ile x   *ptr ile p  **ptr ile x i(*p) temsil ederim
int **ptr=NULL;

printf("x: %d\n", x);
printf("y: %d\n", y);

printf("**********************************************\n");

p=&x;
*p=10;

printf("x: %d\n", x);
printf("y: %d\n", y);

printf("**********************************************\n");

ptr=&p;
*ptr=&y; // p=&y;
*p=20;

printf("x: %d\n", x);
printf("y: %d\n", y);

printf("**********************************************\n");

**ptr=200;

printf("x:%d\n", x);
printf("y :%d\n",y);


    return 0;
}
