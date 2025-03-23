#include <stdio.h>
#include <stdlib.h>

struct kitap {
    char *ad;
    char *yazar;
    int sayfasayisi;
    int yil;
};

void printme(struct kitap* ptr) {
    printf("kitabin adi: %s\n", (*ptr).ad);          // (*ptr).ad ile eriþim
    printf("yazarin adi: %s\n", (*ptr).yazar);      // (*ptr).yazar ile eriþim
    printf("kitabin sayfa no: %d\n", (*ptr).sayfasayisi);  // (*ptr).sayfasayisi ile eriþim
    printf("kitabin ciktigi yil: %d\n", (*ptr).yil);       // (*ptr).yil ile eriþim
}

int main() {
    struct kitap x;
    struct kitap* y;
    y = &x;

    (*y).ad = "sefiller";       // (*y).ad ile deðer atama
    (*y).yazar = "victor hugo"; // (*y).yazar ile deðer atama
    (*y).sayfasayisi = 1000;    // (*y).sayfasayisi ile deðer atama
    (*y).yil = 1862;            // (*y).yil ile deðer atama

    printme(y);

    return 0;
}
