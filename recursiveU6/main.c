#include <stdio.h>
#include <stdlib.h>

// Recursive fonksiyon
void seriyap(int baslangic, int bitis, int artim) {
    if (baslangic <= bitis) { // Bitiş değerine kadar işlem yap
        printf("%4d", baslangic);
        seriyap(baslangic + artim, bitis, artim); // Sonraki değeri hesapla
    }
}

int main() {
    int bs, bt, ad;

    // Kullanıcıdan giriş değerleri alınıyor
    printf("Lutfen baslangic degerini giriniz: ");
    scanf("%d", &bs);

    printf("Lutfen bitis degerini giriniz: ");
    scanf("%d", &bt);

    printf("Lutfen artim degerini giriniz: ");
    scanf("%d", &ad);

    // Seriyi hesapla ve yazdır
    printf("Olusan seri: ");
    seriyap(bs, bt, ad);
    printf("\n");

    return 0;
}
