#include <stdio.h>
#include <stdlib.h>

int main() {
    char numaralar[10][10], isimler[10][20];
    int notlar[10];
    int i = 0;
    FILE *dosya;

    if ((dosya = fopen("C:\\ckodlari\\dosyalamaYeni11\\ornek.txt", "r")) != NULL) {
        while (!feof(dosya)) {
            fscanf(dosya, "%s %s %d", numaralar[i], isimler[i], &notlar[i]);
            printf("%s %s %d\n", numaralar[i], isimler[i], notlar[i]);
            i++;
        }
        fclose(dosya);
    } else {
        printf("Dosya acilamadi.\n");
    }

    return 0;
}
