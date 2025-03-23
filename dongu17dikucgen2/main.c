#include <stdio.h>
#include <stdlib.h>

int main()
{

  int sharp=0;
      int i,j;

    printf("please enter a number of sharp : ");
    scanf("%d",&sharp);


    for(i=1;i<=sharp;i++){
        for(j=1;j<=i;j++){
            printf("%d",j);
        }
        printf("\n");
    }


    for(i=1;i<=sharp;i++){
        for(j=sharp;j>=i;j--){
            printf("%d",j);
        }
        printf("\n");
    }

    printf("---------------------------------------------------------------\n");

    for(i=1;i<=sharp;i++){
        for(j=1;j<=i;j++){
            printf("%d",j);
        }
        printf("\n");
    }


    for(i=1;i<=sharp;i++){
        for(j=i;j<=sharp;j++){
            printf("%d",j);
        }
        printf("\n");
    }

 printf("---------------------------------------------------------------\n");

    for(i=1;i<=sharp;i++){
        for(j=1;j<=i;j++){
            printf("%d",j);
        }
        printf("\n");
    }


    for(i=1;i<=sharp;i++){
        for(j=1;j<=sharp-i;j++){
            printf("%d",j);
        }
        printf("\n");
    }


    return 0;
}
