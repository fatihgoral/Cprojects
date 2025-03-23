#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc != 4) {
        printf("Hatal� giri�! Kullan�m: %s <sayi1> <islem> <sayi2>\n", argv[0]);
        return 1;
    }

    double sayi1 = atof(argv[1]);
    int islem = atoi(argv[2]);  // ��lem t�r� (1: +, 2: -, 3: *, 4: /)
    double sayi2 = atof(argv[3]);

    double sonuc;

    // ��lem yap�lacak
    switch (islem) {
        case 1:  // Toplama
            sonuc = sayi1 + sayi2;
            break;
        case 2:  // ��karma
            sonuc = sayi1 - sayi2;
            break;
        case 3:  // �arpma
            sonuc = sayi1 * sayi2;
            break;
        case 4:  // B�lme
            if (sayi2 == 0) {
                printf("B�lme hatas�: 0'a b�l�nemez.\n");
                return 1;
            }
            sonuc = sayi1 / sayi2;
            break;
        default:
            printf("Ge�ersiz i�lem! Kullan�labilir i�lemler: 1 (toplama), 2 (��karma), 3 (�arpma), 4 (b�lme)\n");
            return 1;
    }

    printf("Sonu�: %.2lf\n", sonuc);

    return 0;
}
