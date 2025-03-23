#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *kaynak, *hedef;
    char ch;

    // Kaynak dosyay� okuma modunda a�
    kaynak = fopen("kaynak.txt", "r");
    if (kaynak == NULL) {
        printf("Kaynak dosya a��lamad�.\n");
        return 1;
    }

    // Hedef dosyay� yazma modunda a� (yeni dosya olu�turur)
    hedef = fopen("hedef.txt", "w");
    if (hedef == NULL) {
        printf("Hedef dosya olu�turulamad�.\n");
        fclose(kaynak);
        return 1;
    }

    // Kaynak dosyadan bir karakter oku ve hedef dosyaya yaz
    while ((ch = fgetc(kaynak)) != EOF) {
        fputc(ch, hedef);
    }

    // Dosyalar� kapat
    fclose(kaynak);
    fclose(hedef);

    printf("Dosya ba�ar�yla kopyaland�.\n");

    return 0;
}
