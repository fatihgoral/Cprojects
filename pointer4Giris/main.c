#include <stdio.h>
#include <stdlib.h>
#include <math.h>  // sqrt fonksiyonu için gerekli baþlýk dosyasý

/*
Bu program, kullanýcýdan bir sayý alýr ve bu sayýnýn karekokunu hesaplar.
Karekok hesaplama iþlemi, bir iþaretçi yardýmýyla yapýlýr ve sonuç bellekteki
ayný adrese yazýlýr. Sonuç daha sonra ekrana yazdýrýlýr.
*/

// squareRoot fonksiyonunun tanýmý
float* squareRoot(float* ptr) {
    ;  // sqrt fonksiyonu float yerine double alýr ve döner
    return ptr;
}

int main() {
    float number;
    float* ptr;

    printf("enter a number: ");
    scanf("%f", &number);

    // Adresin hexadecimal formatta yazdýrýlmasý
    printf("Address of number: %p\n", &number);

    ptr = squareRoot(&number);
    printf("square root of number: %.2f\n\n", *ptr);

    return 0;
}
