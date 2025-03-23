#include <stdio.h>
#include <string.h>
// palindrom kelime kontrolu
int main() {
    char kelime[100]; // Kullanýcýdan alýnacak kelime için yer ayýr
    char *bas, *son; // Pointer'lar kullanýlacak
    int uzunluk, palindrom = 1; // Palindrom kontrolü için bayrak

    printf("Bir kelime girin: ");
    scanf("%s", kelime);

    uzunluk = strlen(kelime); // Kelimenin uzunluðunu hesapla
    bas = kelime; // Baþ pointer'ý kelimenin baþlangýcýný iþaret eder
    son = kelime + uzunluk - 1; // Son pointer'ý kelimenin son karakterini iþaret eder

    // Baþ ve son pointer'larý karþýlaþtýrarak ilerle
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
