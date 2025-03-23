#include <stdio.h>
#include <stdlib.h>
enum Level{
SMALL,
MEDIUM,
LARGE,
XLARGE
};



int main()
{
    enum Level myConst;
    myConst=LARGE;
    printf("%d\n",myConst);// arraydeki indis gibi dusun bu yuzden 2 verdi
    return 0;
}
