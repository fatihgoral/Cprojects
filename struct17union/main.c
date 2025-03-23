#include <stdio.h>
#include <stdlib.h>
#include <string.h>  // strcpy fonksiyonu için gerekli

/*Bu kodda bir struct icinde union kullanarak bir arabayi tanimladik. union içinde fiyat ve marka gibi iki üye var.
marka'ya bir deger atadiktan sonra, fiyat'a bir deger atadigimizda marka'nın bilgisi geçersiz olur.
Bu nedenle, marka'nın degeri yazdirildiginda gorunmez.
*/

// Yapı tanımlaması
struct araba {
    int satis;// Bu, struct'ın bir üyesi
    union {
        double fiyat;   // Bu, union'ın bir üyesi
        char marka[20];   // Bu, union'ın bir üyesi
    } bilgi;
};

int main() {
    // Yapı değişkeni
    struct araba araba_A;

    // Değer atamaları
    araba_A.satis = 0;
    strcpy(araba_A.bilgi.marka, "Anadol");
    araba_A.satis = 1;
    araba_A.bilgi.fiyat = 20000.0;

    // Çıktıyı kontrol etmek için örnek
    printf("Satis: %d\n", araba_A.satis);
    printf("Marka: %s\n", araba_A.bilgi.marka);
    printf("Fiyat: %.2f\n", araba_A.bilgi.fiyat);

    return 0;
}

