#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t[100];
    int *ptr;
    int i;
    for(ptr=t;t<ptr+100;ptr++){
        *ptr=0;
    }
    for(ptr=t;ptr<t+100;ptr++){
        printf("%d\n",*ptr);
    }


    return 0;
}
