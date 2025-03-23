#include <stdio.h>
#include <stdlib.h>
#define PI 3.14
#define SAYI 5
int main()
{
    #if sayi==6
    printf("sayimiz : %d",sayi);
    #else
    printf("sayimiz 5 den farklidir");
    #endif
/*
#if, kosullu ifadelerle birlikte belirli sayisal degerler veya ifadeleri kontrol etmek için kullanilirken,
#endif #ifdef, sadece makronun tanimli olup olmadigini kontrol eder.
#else ve #endif yapilari, bu kontrolun alternatifi olarak kullanilabilir.

   */

    return 0;
}
