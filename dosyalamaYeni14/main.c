#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *kaynak, *hedef;
    char ch;

    // Kaynak dosyayý okuma modunda aç
    kaynak = fopen("kaynak.txt", "r");
    if (kaynak == NULL) {
        printf("Kaynak dosya açýlamadý.\n");
        return 1;
    }

    // Hedef dosyayý yazma modunda aç (yeni dosya oluþturur)
    hedef = fopen("hedef.txt", "w");
    if (hedef == NULL) {
        printf("Hedef dosya oluþturulamadý.\n");
        fclose(kaynak);
        return 1;
    }

    // Kaynak dosyadan bir karakter oku ve hedef dosyaya yaz
    while ((ch = fgetc(kaynak)) != EOF) {
        fputc(ch, hedef);
    }

    // Dosyalarý kapat
    fclose(kaynak);
    fclose(hedef);

    printf("Dosya baþarýyla kopyalandý.\n");

    return 0;
}
