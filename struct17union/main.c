#include <stdio.h>
#include <stdlib.h>
#include <string.h>  // strcpy fonksiyonu i�in gerekli

/*Bu kodda bir struct icinde union kullanarak bir arabayi tanimladik. union i�inde fiyat ve marka gibi iki �ye var.
marka'ya bir deger atadiktan sonra, fiyat'a bir deger atadigimizda marka'n�n bilgisi ge�ersiz olur.
Bu nedenle, marka'n�n degeri yazdirildiginda gorunmez.
*/

// Yap� tan�mlamas�
struct araba {
    int satis;// Bu, struct'�n bir �yesi
    union {
        double fiyat;   // Bu, union'�n bir �yesi
        char marka[20];   // Bu, union'�n bir �yesi
    } bilgi;
};

int main() {
    // Yap� de�i�keni
    struct araba araba_A;

    // De�er atamalar�
    araba_A.satis = 0;
    strcpy(araba_A.bilgi.marka, "Anadol");
    araba_A.satis = 1;
    araba_A.bilgi.fiyat = 20000.0;

    // ��kt�y� kontrol etmek i�in �rnek
    printf("Satis: %d\n", araba_A.satis);
    printf("Marka: %s\n", araba_A.bilgi.marka);
    printf("Fiyat: %.2f\n", araba_A.bilgi.fiyat);

    return 0;
}

