#include <stdio.h>
#include <ctype.h>
// girilen ifadedeki toplam kelime ve sayi kac taneyse bunu bulan program
int main() {
    char cumle[100];
    int i = 0, sayac = 0;
    int kelimeBasladi = 0; // Bir kelimenin baþladýðýný takip etmek için

    printf("Lütfen bir cümle giriniz:\n");
    fgets(cumle, 100, stdin);

    // fgets'in eklediði newline karakterini sil
    if (cumle[strlen(cumle) - 1] == '\n') {
        cumle[strlen(cumle) - 1] = '\0';
    }

    while (cumle[i] != '\0') {
        // Eðer þu anki karakter harf veya rakamsa bir kelimenin içindeyiz demektir
        if (isalnum(cumle[i])) {
            if (!kelimeBasladi) {
                // Eðer bir kelime yeni baþlýyorsa, sayacý artýr
                sayac++;
                kelimeBasladi = 1; // Kelime baþladý olarak iþaretle
            }
        } else {
            // Eðer boþluk veya özel bir karaktere geldiysek, kelime bitmiþtir
            kelimeBasladi = 0;
        }
        i++;
    }

    printf("Cümledeki kelime sayýsý: %d\n", sayac);

    return 0;
}


