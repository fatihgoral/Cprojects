#include <stdio.h>
#include <stdlib.h>
#include <string.h>

union test{
int x;
float y;
char z[15];
};
int main()
{
    union test t;
    t.x=23;
    printf("x in degeri: %d\n",t.x);
    t.y=45.76;
        printf("union veri tipi boyutu: %d\n", sizeof(t));


    strcpy(t.z,"fatih");
    printf("z nin icindeki:%s",t.z);



    return 0;
}
