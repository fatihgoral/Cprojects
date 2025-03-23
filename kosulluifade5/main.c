#include <stdio.h>
#include <stdlib.h>

int main()
{
int x,y;
x=4;
y=6;
   if (x < 5)
    if (y > 5)
        printf("aaaa\n");
    else
        printf("bbbb\n");
printf("cccc\n");

/*

if (x < 5) {
    if (y > 5)
        printf("aaaa\n");
} else {
    printf("bbbb\n");
    printf("cccc\n");
}
*/


    return 0;
}
