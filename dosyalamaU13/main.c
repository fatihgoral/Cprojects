#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *dosya;
    char kelime[30];

    while (1) {
        printf("Lutfen kelimeyi giriniz: ");
        gets(kelime);

        if (kelime[0] == '0') {
            break; // D�ng�y� sonland�r�r
        } else {
            dosya = fopen("kelimeler.txt", "a");
            if (dosya == NULL) {
                printf("Dosya acilamadi.\n");
            } else {
                fprintf(dosya, "%s\n", kelime);
                fclose(dosya);
            }
        }
    }

    return 0;
}
