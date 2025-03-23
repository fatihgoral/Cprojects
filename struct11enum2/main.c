#include <stdio.h>
#include <stdlib.h>
enum Month{
JANUARY=1, // numarayi 1'den baslattik ve enum yapisi ile otomatik olarak artacak ;
FEBRUARY,
MARCH,
APRIL,
MAY,
JUNE,
JULY,
AUGUST,
SEPTEMBER,
OCTOBER,
NOVEMBER,
DECEMBER
};

int main()
{
    enum Month myConst;
    myConst=SEPTEMBER;
 printf("number :%d",myConst);
    return 0;
}



