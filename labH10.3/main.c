#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc != 4) {
        printf("Kullaným: %s <islem> <numara1> <numara2>\n", argv[0]);
        return 1;
    }

    char islem = argv[1][0];
    double numara1 = atof(argv[2]);
    double numara2 = atof(argv[3]);
    double sonuc;

    switch (islem) {
        case '+':
            sonuc = numara1 + numara2;
            break;
        case '-':
            sonuc = numara1 - numara2;
            break;
        case '*':
            sonuc = numara1 * numara2;
            break;
        case '/':
            if (numara2 != 0) {
                sonuc = numara1 / numara2;
            } else {
                printf("Hata: 0'a bolme islemi yapilamaz.\n");
                return 1;
            }
            break;
        default:
            printf("Hata: Gecersiz islem. (+, -, *, / kullanin)\n");
            return 1;
    }

    printf("Sonuc: %.2f\n", sonuc);
    return 0;
}

