#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,number;

    printf("enter a number");
    scanf("%d",&number);
    for(i=1;i<number;i++){
        for(j=1;j<=number-i;j++){
            printf("  ");
        }
          for(j=1;j<=i*2-1;j++){
            printf("* ");

 }
    printf("\n");
    }
    return 0;
}
