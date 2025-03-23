#include <stdio.h>
#include <string.h>
//Bu program, isaretcileri kullanarak bir kelimenin palindrom olup olmadigini kontrol eder.
int main() {
    char kelime[100];
    char *bas, *son;
    int uzunluk, palindrom = 1;

    printf("Bir kelime girin: ");
    scanf("%s", kelime);

    uzunluk = strlen(kelime);  // Kelimenin uzunluðunu al

    bas = kelime;  // Bas iþaretçisi kelimenin baþlangýcýný gösterir
    son = kelime + uzunluk - 1;  // Son iþaretçisi kelimenin son karakterini gösterir

    while (bas < son) {
        if (*bas != *son) {  // Eðer baþlangýç ve son karakterler eþit deðilse
            palindrom = 0;   // Palindrom deðil
            break;
        }
        bas++;  // Baþlangýç iþaretçisini bir sonraki karaktere kaydýr
        son--;  // Son iþaretçisini bir önceki karaktere kaydýr
    }

    if (palindrom)
        printf("%s bir palindrom kelimedir.\n", kelime);
    else
        printf("%s bir palindrom kelime deðildir.\n", kelime);

    return 0;
}

