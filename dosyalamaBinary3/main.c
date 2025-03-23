#include <stdio.h>

struct Ogrenci {
    int id;
    float not;
};

int main() {
    FILE *dosya;
    struct Ogrenci ogrenci;

    dosya = fopen("ogrenci.bin", "rb");
    if (dosya == NULL) {
        printf("Dosya a��lamad�.\n");
        return 1;
    }

    // Struct'� dosyadan oku
   fread(&ogrenci,sizeof(struct ogrenci),1,dosya);

    printf("ID: %d, Not: %.2f\n", ogrenci.id, ogrenci.not);

    fclose(dosya);
    return 0;
}
