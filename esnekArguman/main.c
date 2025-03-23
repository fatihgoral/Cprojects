#include <stdio.h>
#include <stdarg.h>  // va_list ve va_start/va_end için gerekli kütüphane

int topla(int miktar, ...) {

   va_list ag;
   int i;
   int toplam=0;
   va_start(ag,miktar);
   for(i=0;i<miktar;i++){
    toplam+=va_arg(ag,int);

   }
   va_end(ag);
   return toplam;
}

int main(void) {
    printf("%d\n", topla(3, 5, 5, 6));  // 5 + 5 + 6 = 16  burada 3 sayisi arguman sayisini temsil eder
    printf("%d\n", topla(10, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10));  // 1 + 2 + ... + 10 = 55 burada 10 sayisi arguman sayisini temsil eder

    return 0;
}
