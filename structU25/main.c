#include <stdio.h>
#include <stdlib.h>

// typedef tanýmý
typedef struct karmasik_sayi {
    float reel;
    float sanal;
} karmasik;

// Fonksiyon tanýmý

void topla(karmasik n1, karmasik n2) {
    karmasik temp;
    temp.reel = n1.reel + n2.reel;
    temp.sanal = n1.sanal + n2.sanal;

    printf("%.3f + %.3fi\n", n1.reel, n1.sanal);
    printf("%.3f + %.3fi\n", n2.reel, n2.sanal);
    printf("Toplam = %.3f + %.3fi\n", temp.reel, temp.sanal);
}

int main() {
    karmasik k1, k2;

    printf("Birinci sayinin reel ve sanal kismini giriniz: ");
    scanf("%f %f", &k1.reel, &k1.sanal);

    printf("Ýkinci sayýnýn reel ve sanal kismini giriniz: ");
    scanf("%f %f", &k2.reel, &k2.sanal);

    topla(k1, k2);

    return 0;
}
