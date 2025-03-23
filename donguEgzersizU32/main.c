#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int j;

    for(int i=5;i>=1;i--){
        for(int j=1;j<=i;j++){
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}
