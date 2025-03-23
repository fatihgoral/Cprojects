#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ad1;
    int* ad2;
    int n=10,p=10;
    ad1=&n;
    ad2=&p;

    printf("atamadan once ad1 degeri:%d\n",*ad1);
    printf("%d\n",ad1);
    *ad1=*ad2+2;

    printf("atamadan sonra ad1 degeri:%d\n",*ad1);
    printf("%d\n",ad1);

    return 0;
}
