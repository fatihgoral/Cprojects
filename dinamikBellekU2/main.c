#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[10];
    int*p=(int*)malloc(10*sizeof(int));
    a[3]=5;
    p[3]=5;
    printf("%d\n",a[3]);
    printf("%d\n",*(p+3));

    return 0;
}
