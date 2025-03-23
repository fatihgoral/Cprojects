#include <stdio.h>
#include <string.h>  // strcpy fonksiyonu i�in gerekli

struct Kitap {
    char bookname[50];
    char author[50];
    int pageCount;
    int bindingCount;  // Cilt say�s�n� tutan de�i�ken
};

int main() {
    // Bir kitap dizisi olu�turma
    struct Kitap kitaplar[3];

    // Kitap bilgilerini strcpy ile atama
    strcpy(kitaplar[0].bookname, "Harry Potter");
    strcpy(kitaplar[0].author, "J.K. Rowling");
    kitaplar[0].pageCount = 223;
    kitaplar[0].bindingCount = 1;

    strcpy(kitaplar[1].bookname, "Y�z�klerin Efendisi");
    strcpy(kitaplar[1].author, "J.R.R. Tolkien");
    kitaplar[1].pageCount = 1178;
    kitaplar[1].bindingCount = 2;

    strcpy(kitaplar[2].bookname, "Alacakaranl�k");
    strcpy(kitaplar[2].author, "Stephenie Meyer");
    kitaplar[2].pageCount = 498;
    kitaplar[2].bindingCount = 3;

    // Kitap bilgilerini ekrana yazd�rma
    for (int i = 0; i < 3; i++) {
        printf("Kitap %d:\n", i + 1);
        printf("Isim: %s\n", kitaplar[i].bookname);
        printf("Yazar: %s\n", kitaplar[i].author);
        printf("Sayfa Sayisi: %d\n", kitaplar[i].pageCount);
        printf("Cilt Sayisi: %d\n", kitaplar[i].bindingCount);
        printf("\n");
    }

    return 0;
}
