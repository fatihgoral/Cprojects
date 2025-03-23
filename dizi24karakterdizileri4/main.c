#include <stdio.h>

int main() {
    char isim[10][20]; // 10 adet isim saklamak için 20 karakterlik yer ayýrýr
    int sayi;

    printf("Kac adet isim girilecek? : ");
    scanf("%d", &sayi); // Kullanýcýdan isim sayýsýný alýr

    for (int i = 0; i < sayi; i++) {
        printf("%d. isim : ", i + 1);
        scanf("%s", isim[i]); // Kullanýcýdan isimleri alýr
    }

    printf("Girdiginiz isimler:\n");
    for (int i = 0; i < sayi; i++) {
        printf("%d. isim : %s\n", i + 1, isim[i]); // Alýnan isimleri ekrana yazdýrýr
    }

    return 0;
}

