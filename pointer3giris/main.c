#include <stdio.h>

int main() {

       /*
    xtr: Bir iþaretçidir ve iþaret ettiði adresi artýrarak (xtr += 4) deðiþtirebilirsiniz. Bu durumda xtr, x'in deðil, x
    'in bellek bloðunun birkaç birim sonrasýný iþaret eder.
&x: x'in bellekteki sabit adresidir. Bu adres deðiþtirilemez, çünkü x bellekte belirli bir adrese atanmýþtýr ve bu adres
x deðiþkeninin bellekteki yeri olarak sabittir.
Bu nedenle, xtr deðiþtirilebilir bir iþaretçi olduðu için adresi deðiþir, ancak &x sabit olduðu için adresi deðiþmez.
*/


    int x = 10;
    int *xtr = &x;

    // Baslangicta xtr'nin adresi ile &x ayni olur
    printf("Baslangicta xtr'nin adresi: %p\n", xtr);
    printf("Baslangicta &x'in adresi: %p\n", &x);

    // xtr'yi 4 artirdigimizda xtr'nin gosterdigi adres degisir
    xtr += 4;

    // &x sabit kaldigi icin adresi degismez
    printf("xtr += 4 sonrasi xtr'nin adresi: %p\n", xtr);
    printf("&x'in adresi: %p\n", &x);



    return 0;
}
