#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
int *p = arr;
printf("%d", *(p + 3));
    return 0;
}
