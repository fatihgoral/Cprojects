#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi,i,j,control;
    printf("lutfen bir sayi giriniz ");
    scanf("%d",&sayi);
    for(i=2;i<=sayi;i++){
        control=1;
        for(j=2;j<=i/2;j++){
            if(i%j==0){
                control=0;
                break;
            }
        } // ic for bitti
        if(control!=0){
        printf("%d\n",i);
        }

    }// dis for bitti

    return 0;
}
