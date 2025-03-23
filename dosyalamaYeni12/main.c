#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *dosya;
    char ch;

    if ((dosya = fopen("C:\\ckodlari\\dosyalamaYeni12\\deneme.txt", "r")) != NULL) {
        ch = fgetc(dosya);
        while (ch != EOF) {
                printf("%c",ch);
            ch = fgetc(dosya);
        }
        fclose(dosya);
    } else {
        printf("Dosya bulunamadi.\n");
    }

    return 0;
}
