#include <stdio.h>
#include <stdlib.h>
#include <math.h>  // sqrt fonksiyonu i�in gerekli ba�l�k dosyas�

/*
Bu program, kullan�c�dan bir say� al�r ve bu say�n�n karekokunu hesaplar.
Karekok hesaplama i�lemi, bir i�aret�i yard�m�yla yap�l�r ve sonu� bellekteki
ayn� adrese yaz�l�r. Sonu� daha sonra ekrana yazd�r�l�r.
*/

// squareRoot fonksiyonunun tan�m�
float* squareRoot(float* ptr) {
    ;  // sqrt fonksiyonu float yerine double al�r ve d�ner
    return ptr;
}

int main() {
    float number;
    float* ptr;

    printf("enter a number: ");
    scanf("%f", &number);

    // Adresin hexadecimal formatta yazd�r�lmas�
    printf("Address of number: %p\n", &number);

    ptr = squareRoot(&number);
    printf("square root of number: %.2f\n\n", *ptr);

    return 0;
}
