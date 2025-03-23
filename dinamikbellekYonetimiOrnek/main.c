#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    // 10 karakter kapasiteli bir i�aretci tanimlama
    char *str = (char*)malloc(10 * sizeof(char));

    if (str == NULL) {
        printf("Bellek tahsisi ba�ar�s�z.\n");
        return 1;
    }

    // "Algoritma" degerini atama
    strcpy(str, "Algoritma");

    // Kapasiteyi 25 karaktere c�karma
    str = (char*)realloc(str, 25 * sizeof(char));

    if (str == NULL) {
        printf("Bellek yeniden tahsisi ba�ar�s�z.\n");
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


