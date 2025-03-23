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
                printf("Geçersiz iþlem: payda 0 olamaz\n");
                return; // Bölme iþlemine devam etmiyor, fonksiyondan çýkýyoruz
            } else {
                *islemsonucu = *bir / *iki;
            }
            break;
        case '*':
            *islemsonucu = *bir * *iki;
            break;
        default:
            printf("Geçersiz bir giriþ yaptýnýz\n");
            break;
    }
}

int main() {
    float birincisayi, ikincisayi;
    char islem;
    float sonuc;

    printf("Hangi iþlemi yapmak istiyorsunuz (+, -, *, /)? ");
    scanf(" %c", &islem);  // Boþluðu atlamak için ' %c' kullanýldý
    printf("Lütfen 2 adet sayý giriniz: ");
    scanf("%f %f", &birincisayi, &ikincisayi);

    calcul(&birincisayi, &ikincisayi, islem, &sonuc);  // Pointer kullanarak fonksiyona deðerler gönderildi

    // Eðer bölme iþlemi yapýlmadýysa, sonucu yazdýr
    if (!(islem == '/' && ikincisayi == 0)) {
        printf("Ýlk sayýmýz: %.2f, Ýkinci sayýmýz: %.2f, Ýþlemimiz: %c ve Sonucumuz: %.2f\n",
                birincisayi, ikincisayi, islem, sonuc);
    }

    return 0;
}
