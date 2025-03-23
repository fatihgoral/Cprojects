#include <stdio.h>
#include <string.h>
// palindrom kelime kontrolu
int main() {
    char kelime[100]; // Kullan�c�dan al�nacak kelime i�in yer ay�r
    char *bas, *son; // Pointer'lar kullan�lacak
    int uzunluk, palindrom = 1; // Palindrom kontrol� i�in bayrak

    printf("Bir kelime girin: ");
    scanf("%s", kelime);

    uzunluk = strlen(kelime); // Kelimenin uzunlu�unu hesapla
    bas = kelime; // Ba� pointer'� kelimenin ba�lang�c�n� i�aret eder
    son = kelime + uzunluk - 1; // Son pointer'� kelimenin son karakterini i�aret eder

    // Ba� ve son pointer'lar� kar��la�t�rarak ilerle
   while(bas<son){
    if(*bas!=*son){
        palindrom=0;
        break;
    }
    bas++;
    son--;
   }



    if (palindrom) {
        printf("Girilen kelime bir palindromdur.\n");
    } else {
        printf("Girilen kelime bir palindrom degildir.\n");
    }

    return 0;
}
