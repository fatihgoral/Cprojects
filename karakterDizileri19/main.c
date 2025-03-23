#include <stdio.h>

int main() {
    char metin[100];  // Kullanýcýnýn girdiði metin için bir dizi
    int i = 0, a_count = 0, e_count = 0;  // a, A, e, E harflerinin sayýsýný tutacak deðiþkenler

    // Kullanýcýdan metni almak
    printf("Bir metin giriniz: ");
    fgets(metin, 100, stdin);  // fgets kullanarak metin alýnýyor

    // Metni kontrol etmek ve 'a', 'A', 'e', 'E' harflerini saymak
    while(metin[i] != '\0') {  // Metnin sonuna gelene kadar
        if(metin[i] == 'a' || metin[i] == 'A') {
            a_count++;  // 'a' veya 'A' harfi bulunduysa sayacý artýr
        }
        if(metin[i] == 'e' || metin[i] == 'E') {
            e_count++;  // 'e' veya 'E' harfi bulunduysa sayacý artýr
        }
        i++;  // Bir sonraki harfe geç
    }

    // Sonuçlarý ekrana yazdýrmak
    printf("Metindeki 'a' veya 'A' harfi sayisi: %d\n", a_count);
    printf("Metindeki 'e' veya 'E' harfi sayisi: %d\n", e_count);

    return 0;
}
