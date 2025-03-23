#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[]={10,20,30,40,50};
    int *ptr;
    ptr=arr;

    printf("%d\n",ptr);
    printf("%d\n",ptr+1);
    printf("%d\n",ptr+2);

 printf("----------------------\n");
 ptr++;
 printf("%d\n",ptr);





    return 0;
}
