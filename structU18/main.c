#include <stdio.h>
#include <stdlib.h>

// Klavyeden girilen sayıları tutan 2 adet değişken için aynı bellek bölgesini paylaşan paylas adında
// union tanımlanıyor
union paylasim_kontrol {
    int x;
    int y;
};

int main() {
    union paylasim_kontrol kontrol;
    int *x, *y;

    // kontrol.x'e değer atandıktan sonra x pointer'ı kontrol.x'in adresine atanıyor
    kontrol.x = 23;
    x = &kontrol.x;

    // kontrol.y'ye değer atandıktan sonra y pointer'ı kontrol.y'in adresine atanıyor
    kontrol.y = 27;
    y = &kontrol.y;

    // Değerler ve adresler yazdırılıyor
    printf("x in degeri: %d\t x in adresi: %p\n", *x, x);
    printf("y nin degeri: %d\t y nin adresi: %p\n", *y, y);

    return 0;
}
