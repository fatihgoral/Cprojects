#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[10];
    int *p=(int*)calloc(10,sizeof(int));
// burada a ile p ayni seydir esdegerdir

    a[3]=5;
    p[3]=5;

    printf("%d\n",a[3]);
    printf("%d\n",p[3]);


    return 0;
}
