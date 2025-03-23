#include <stdio.h>
#include <ctype.h>
// girilen ifadedeki toplam kelime ve sayi kac taneyse bunu bulan program
int main() {
    char cumle[100];
    int i = 0, sayac = 0;
    int kelimeBasladi = 0; // Bir kelimenin ba�lad���n� takip etmek i�in

    printf("L�tfen bir c�mle giriniz:\n");
    fgets(cumle, 100, stdin);

    // fgets'in ekledi�i newline karakterini sil
    if (cumle[strlen(cumle) - 1] == '\n') {
        cumle[strlen(cumle) - 1] = '\0';
    }

    while (cumle[i] != '\0') {
        // E�er �u anki karakter harf veya rakamsa bir kelimenin i�indeyiz demektir
        if (isalnum(cumle[i])) {
            if (!kelimeBasladi) {
                // E�er bir kelime yeni ba�l�yorsa, sayac� art�r
                sayac++;
                kelimeBasladi = 1; // Kelime ba�lad� olarak i�aretle
            }
        } else {
            // E�er bo�luk veya �zel bir karaktere geldiysek, kelime bitmi�tir
            kelimeBasladi = 0;
        }
        i++;
    }

    printf("C�mledeki kelime say�s�: %d\n", sayac);

    return 0;
}


