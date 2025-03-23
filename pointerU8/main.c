#include <stdio.h>
#include <stdlib.h>

void calcul(float *bir, float *iki, char operasyon, float *islemsonucu) {
    switch(operasyon) {
        case '+':
            *islemsonucu = *bir + *iki;
            break;
        case '-':
            *islemsonucu = *bir - *iki;
            break;
        case '/':
            if (*iki == 0) {
                printf("Ge�ersiz i�lem: payda 0 olamaz\n");
                return; // B�lme i�lemine devam etmiyor, fonksiyondan ��k�yoruz
            } else {
                *islemsonucu = *bir / *iki;
            }
            break;
        case '*':
            *islemsonucu = *bir * *iki;
            break;
        default:
            printf("Ge�ersiz bir giri� yapt�n�z\n");
            break;
    }
}

int main() {
    float birincisayi, ikincisayi;
    char islem;
    float sonuc;

    printf("Hangi i�lemi yapmak istiyorsunuz (+, -, *, /)? ");
    scanf(" %c", &islem);  // Bo�lu�u atlamak i�in ' %c' kullan�ld�
    printf("L�tfen 2 adet say� giriniz: ");
    scanf("%f %f", &birincisayi, &ikincisayi);

    calcul(&birincisayi, &ikincisayi, islem, &sonuc);  // Pointer kullanarak fonksiyona de�erler g�nderildi

    // E�er b�lme i�lemi yap�lmad�ysa, sonucu yazd�r
    if (!(islem == '/' && ikincisayi == 0)) {
        printf("�lk say�m�z: %.2f, �kinci say�m�z: %.2f, ��lemimiz: %c ve Sonucumuz: %.2f\n",
                birincisayi, ikincisayi, islem, sonuc);
    }

    return 0;
}
