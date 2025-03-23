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

    // Okuma i�lemi - �lk d�ng�
    fseek(fptr, 0, SEEK_SET); // Dosya ba��na d�n
    for (int i = 0; i < 4; i++) {
        printf("%c", fgetc(fptr)); // �lk 4 karakteri oku
    }

    printf("\n");

    // Okuma pozisyonunu 2 karakter geri al
    fseek(fptr, -2, SEEK_CUR);

    // Okuma i�lemi - �kinci d�ng�
    for (int i = 0; i < 4; i++) {
        printf("%c", fgetc(fptr)); // 4 karakteri daha oku
    }

    printf("\n");

    // rewind ile dosyan�n ba��na d�n
    rewind(fptr);

    // Okuma i�lemi - ���nc� d�ng�
    for (int i = 0; i < 4; i++) {
        printf("%c", fgetc(fptr)); // Ba�lang��tan 4 karakter oku
    }

    printf("\n");

    fclose(fptr);
    return 0;
}
