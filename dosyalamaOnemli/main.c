#include <stdio.h>

int main() {
    FILE *dosya;

    // Dosyayý hem okuma hem yazma modunda aç
    dosya = fopen("ornek.txt", "r+");
    if (dosya == NULL) {
        printf("Dosya açýlamadý.\n");
        return 1;
    }
    fseek(dosya,5,SEEK_SET);

     fclose(dosya);
    printf("Cümle dosyaya yazýldý.\n");
    return 0;
}
