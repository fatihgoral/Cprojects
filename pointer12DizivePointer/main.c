#include <stdio.h>
#include <string.h>
//Bu program, isaretcileri kullanarak bir kelimenin palindrom olup olmadigini kontrol eder.
int main() {
    char kelime[100];
    char *bas, *son;
    int uzunluk, palindrom = 1;

    printf("Bir kelime girin: ");
    scanf("%s", kelime);

    uzunluk = strlen(kelime);  // Kelimenin uzunlu�unu al

    bas = kelime;  // Bas i�aret�isi kelimenin ba�lang�c�n� g�sterir
    son = kelime + uzunluk - 1;  // Son i�aret�isi kelimenin son karakterini g�sterir

    while (bas < son) {
        if (*bas != *son) {  // E�er ba�lang�� ve son karakterler e�it de�ilse
            palindrom = 0;   // Palindrom de�il
            break;
        }
        bas++;  // Ba�lang�� i�aret�isini bir sonraki karaktere kayd�r
        son--;  // Son i�aret�isini bir �nceki karaktere kayd�r
    }

    if (palindrom)
        printf("%s bir palindrom kelimedir.\n", kelime);
    else
        printf("%s bir palindrom kelime de�ildir.\n", kelime);

    return 0;
}

