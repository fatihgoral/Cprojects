#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numbers[4],i;
    for(i=0;i<=3;i++){
            printf("%d.elemani giriniz:",i+1);
        scanf("%d",&numbers[i]);
    }
    printf("\noriginal order :");
    for(i=0;i<=3;i++){
            printf("%d\t",numbers[i]);
    }
    printf("\nreverse order : ");
    for(i=3;i>=0;i--){
            printf("%d\t",numbers[i]);
    }



    return 0;
}
