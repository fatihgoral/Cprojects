#include <stdio.h>
#include <stdlib.h>

struct kitap {
    char *ad;
    char *yazar;
    int sayfasayisi;
    int yil;
};

void printme(struct kitap* ptr) {
    printf("kitabin adi: %s\n", (*ptr).ad);          // (*ptr).ad ile eri�im
    printf("yazarin adi: %s\n", (*ptr).yazar);      // (*ptr).yazar ile eri�im
    printf("kitabin sayfa no: %d\n", (*ptr).sayfasayisi);  // (*ptr).sayfasayisi ile eri�im
    printf("kitabin ciktigi yil: %d\n", (*ptr).yil);       // (*ptr).yil ile eri�im
}

int main() {
    struct kitap x;
    struct kitap* y;
    y = &x;

    (*y).ad = "sefiller";       // (*y).ad ile de�er atama
    (*y).yazar = "victor hugo"; // (*y).yazar ile de�er atama
    (*y).sayfasayisi = 1000;    // (*y).sayfasayisi ile de�er atama
    (*y).yil = 1862;            // (*y).yil ile de�er atama

    printme(y);

    return 0;
}
