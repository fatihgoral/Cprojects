#include <stdio.h>

int main() {
    FILE *dosya;

    // Dosyay� hem okuma hem yazma modunda a�
    dosya = fopen("ornek.txt", "r+");
    if (dosya == NULL) {
        printf("Dosya a��lamad�.\n");
        return 1;
    }
    fseek(dosya,5,SEEK_SET);

     fclose(dosya);
    printf("C�mle dosyaya yaz�ld�.\n");
    return 0;
}
