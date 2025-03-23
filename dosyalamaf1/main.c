#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fptr = fopen("metin.txt", "w+");
    if (fptr == NULL) {
        printf("Dosya acilamadi!");
        exit(1);
    }

    // Metni dosyaya yaz
    char metin[] = "BURSA TEKNIK UNIVERSITESI";
    for (int i = 0; i < strlen(metin); i++) {
        fputc(metin[i], fptr);
    }

    // Okuma iþlemi - Ýlk döngü
    fseek(fptr, 0, SEEK_SET); // Dosya baþýna dön
    for (int i = 0; i < 4; i++) {
        printf("%c", fgetc(fptr)); // Ýlk 4 karakteri oku
    }

    printf("\n");

    // Okuma pozisyonunu 2 karakter geri al
    fseek(fptr, -2, SEEK_CUR);

    // Okuma iþlemi - Ýkinci döngü
    for (int i = 0; i < 4; i++) {
        printf("%c", fgetc(fptr)); // 4 karakteri daha oku
    }

    printf("\n");

    // rewind ile dosyanýn baþýna dön
    rewind(fptr);

    // Okuma iþlemi - Üçüncü döngü
    for (int i = 0; i < 4; i++) {
        printf("%c", fgetc(fptr)); // Baþlangýçtan 4 karakter oku
    }

    printf("\n");

    fclose(fptr);
    return 0;
}
