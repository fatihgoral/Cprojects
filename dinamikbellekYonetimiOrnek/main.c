#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    // 10 karakter kapasiteli bir iþaretci tanimlama
    char *str = (char*)malloc(10 * sizeof(char));

    if (str == NULL) {
        printf("Bellek tahsisi baþarýsýz.\n");
        return 1;
    }

    // "Algoritma" degerini atama
    strcpy(str, "Algoritma");

    // Kapasiteyi 25 karaktere cýkarma
    str = (char*)realloc(str, 25 * sizeof(char));

    if (str == NULL) {
        printf("Bellek yeniden tahsisi baþarýsýz.\n");
        return 1;
    }

    // "veProgramlama" ekleme
    strcat(str, " veProgramlama");

    // Sonucu ekrana yazdirma
    printf("%s\n", str);

    // Bellegi serbest birakma
    free(str);

    return 0;
}


