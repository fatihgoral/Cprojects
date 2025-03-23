#include <stdio.h>

int main() {

       /*
    xtr: Bir i�aret�idir ve i�aret etti�i adresi art�rarak (xtr += 4) de�i�tirebilirsiniz. Bu durumda xtr, x'in de�il, x
    'in bellek blo�unun birka� birim sonras�n� i�aret eder.
&x: x'in bellekteki sabit adresidir. Bu adres de�i�tirilemez, ��nk� x bellekte belirli bir adrese atanm��t�r ve bu adres
x de�i�keninin bellekteki yeri olarak sabittir.
Bu nedenle, xtr de�i�tirilebilir bir i�aret�i oldu�u i�in adresi de�i�ir, ancak &x sabit oldu�u i�in adresi de�i�mez.
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
