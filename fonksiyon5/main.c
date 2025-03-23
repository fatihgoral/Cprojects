#include <stdio.h>
#include <stdlib.h>


int sumNumber(int,int);// declaration

int main()
{
   int myNumber=sumNumbers(27,34);
   printf("result is %d\n",myNumber);
    return 0;
}
int sumNumbers(int x,int y){
int sum=x+y;
return sum;
}
