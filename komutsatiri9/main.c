#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc != 4) {
        printf("Hatalý giriþ! Kullaným: %s <sayi1> <islem> <sayi2>\n", argv[0]);
        return 1;
    }

    double sayi1 = atof(argv[1]);
    int islem = atoi(argv[2]);  // Ýþlem türü (1: +, 2: -, 3: *, 4: /)
    double sayi2 = atof(argv[3]);

    double sonuc;

    // Ýþlem yapýlacak
    switch (islem) {
        case 1:  // Toplama
            sonuc = sayi1 + sayi2;
            break;
        case 2:  // Çýkarma
            sonuc = sayi1 - sayi2;
            break;
        case 3:  // Çarpma
            sonuc = sayi1 * sayi2;
            break;
        case 4:  // Bölme
            if (sayi2 == 0) {
                printf("Bölme hatasý: 0'a bölünemez.\n");
                return 1;
            }
            sonuc = sayi1 / sayi2;
            break;
        default:
            printf("Geçersiz iþlem! Kullanýlabilir iþlemler: 1 (toplama), 2 (çýkarma), 3 (çarpma), 4 (bölme)\n");
            return 1;
    }

    printf("Sonuç: %.2lf\n", sonuc);

    return 0;
}
