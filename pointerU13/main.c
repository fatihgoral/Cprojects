#include <stdio.h>
#include <stdlib.h>

int main()
{
    char isim[20]={'g','s','f','b'};
    char *can;
    can = isim;

    printf("%c",*(can));
        printf("%c",*(can+1));
            printf("%c",*(can+2));


    return 0;
}
