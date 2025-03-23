#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *dosya;
    char karakter;

    dosya = fopen("lorem.txt", "r");
    if (dosya != NULL) {
            karakter = fgetc(dosya);

        while (karakter!=EOF) {
            printf("%c", karakter);
        }
        fclose(dosya); // Dosya her durumda kapatýlýr
    } else {
        printf("Dosya bulunamadi.\n");
    }

    return 0;
}

