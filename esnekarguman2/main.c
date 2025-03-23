#include <stdarg.h>
#include <stdio.h>

int minimum_bul(int arg_sayac, ...) {

    int i, minimum_sayi, a;
 va_list ap;
 va_start(ap,arg_sayac);
    minimum_sayi=va_arg(ap,int);// ilk arguman otomatik minimum olarak kabul edilir
 for(i=2;i<=arg_sayac;i++){
    a=va_arg(ap,int);
    if(a<minimum_sayi){
        minimum_sayi=a;
    }
 }
 va_end(ap);
 return minimum_sayi;

int main() {
    int sayi_adedi = 5;
    printf("En kucuk sayi: %d\n", minimum_bul(sayi_adedi, 12, 2, 6, 7, 100));
    return 0;
}
