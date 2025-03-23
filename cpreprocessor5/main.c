#include <stdio.h>
#include <stdlib.h>
#define VARMI
int main()
{
   int sayi;
   #ifdef VARMI
   sayi=3;
   #else
   printf("lutfen sayi degerini giriniz : ");
   scanf("%d",&sayi);

   #endif
   printf("sayi=%d",sayi);
  /*
#if, kosullu ifadelerle birlikte belirli sayisal degerler veya ifadeleri kontrol etmek için kullanilirken,
#endif #ifdef, sadece makronun tanimli olup olmadigini kontrol eder.
#else ve #endif yapilari, bu kontrolun alternatifi olarak kullanilabilir.

   */
    return 0;
}
