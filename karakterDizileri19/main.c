#include <stdio.h>

int main() {
    char metin[100];  // Kullan�c�n�n girdi�i metin i�in bir dizi
    int i = 0, a_count = 0, e_count = 0;  // a, A, e, E harflerinin say�s�n� tutacak de�i�kenler

    // Kullan�c�dan metni almak
    printf("Bir metin giriniz: ");
    fgets(metin, 100, stdin);  // fgets kullanarak metin al�n�yor

    // Metni kontrol etmek ve 'a', 'A', 'e', 'E' harflerini saymak
    while(metin[i] != '\0') {  // Metnin sonuna gelene kadar
        if(metin[i] == 'a' || metin[i] == 'A') {
            a_count++;  // 'a' veya 'A' harfi bulunduysa sayac� art�r
        }
        if(metin[i] == 'e' || metin[i] == 'E') {
            e_count++;  // 'e' veya 'E' harfi bulunduysa sayac� art�r
        }
        i++;  // Bir sonraki harfe ge�
    }

    // Sonu�lar� ekrana yazd�rmak
    printf("Metindeki 'a' veya 'A' harfi sayisi: %d\n", a_count);
    printf("Metindeki 'e' veya 'E' harfi sayisi: %d\n", e_count);

    return 0;
}
