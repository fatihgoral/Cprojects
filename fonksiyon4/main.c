#include <stdio.h>
#include <stdlib.h>
int sumNumbers(int x,int y){
//int sum =0; ilk deger atamas� olmasa da bu �rnekte olur.
int sum=x+y;
return sum;
}



int main()
{
   int myNumber=sumNumbers(27,34);
   printf("result is %d\n",myNumber);
    return 0;
}
