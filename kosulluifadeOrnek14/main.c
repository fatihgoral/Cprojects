#include <stdio.h>
#include <stdlib.h>
// bir onceki ornektek,n, ternary hali
int main() {
    int x = 5;
    int y = 10;
    int z;


    z = (x == 4) ? 101 :
        (x == 5) ? ((y == 10) ? 102 : (y == 11) ? 103 : 104) :
        105;


    printf("z'nin degeri: %d\n", z);

    return 0;
}
