#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,number,first=1,second=1,third=1;

    printf("hangi adima kadar devam edecegini belirleyen sayiyi giriniz:");
    scanf("%d",&number);
    printf("1  1  ");
    for(i=1;i<=number;i++){
        first=second;
        second=third;
        third=first+second;
        if(i<=number-2)
            printf("%d  ",third);
    }
    printf("\n\n%d.eleman : %d\n",i-1,first);//  bu kisim önemli
    //dongu son elemnanýnda da +1 oldugundan i-1 yaziyoruz




    return 0;
}
