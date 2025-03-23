#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;
   printf("enter a number please: ");
   scanf("%d",number);
   printf("the charachter you entered : %c\n",number);
   if(isalnum(number)){
    printf("correct");
   }else{
   printf("wrong");
   }

    return 0;
}
