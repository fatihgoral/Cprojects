#include <stdio.h>

int main() {
    char isim[10][20]; // 10 adet isim saklamak i�in 20 karakterlik yer ay�r�r
    int sayi;

    printf("Kac adet isim girilecek? : ");
    scanf("%d", &sayi); // Kullan�c�dan isim say�s�n� al�r

    for (int i = 0; i < sayi; i++) {
        printf("%d. isim : ", i + 1);
        scanf("%s", isim[i]); // Kullan�c�dan isimleri al�r
    }

    printf("Girdiginiz isimler:\n");
    for (int i = 0; i < sayi; i++) {
        printf("%d. isim : %s\n", i + 1, isim[i]); // Al�nan isimleri ekrana yazd�r�r
    }

    return 0;
}

