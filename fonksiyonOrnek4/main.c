#include <stdio.h>
#include <stdlib.h>
// bir fonksiyonda 4 temel iþlemi switch case kullanarak yapsin
// cagirma islemi degisken degeriyle olsun

void calculus(char islem, float n1, float n2,float *islemSonucu) {
      // 'sonuc' yerine 'islemSonucu' kullanýldý
    switch(islem) {
        case '+':
            *islemSonucu = n1 + n2;
            break;
        case '-':
            *islemSonucu = n1 - n2;
            break;
        case '*':
            *islemSonucu = n1 * n2;
            break;
        case '/':
            if (n2 != 0) {
                *islemSonucu = n1 / n2;
            } else {
                printf("Hata: 0'a bolme hatasi!\n");
                return 0;
            }
            break;
        default:
            printf("Gecersiz islem!\n");
            return 0;
    }
}


//void Fonksiyon: Bu fonksiyonun geri donus degeri yoktur,
//ancak sonuclari bir pointer araciligi ile disariya iletir. void fonksiyonlarda da islem yaparak veriler degistirilebilir.
//Sonuc olarak, pointer kullanarak bir fonksiyonun disindaki degiskenler uzerinde degisiklik yapabiliyoruz.
// Bu sayede, void fonksiyonlarla sonuclari disariya aktarmis oluyoruz, geri donus degeri vermeden islemleri tamamliyoruz.

int main() {
    float sayi1, sayi2, sonuc;
    char islem;

    printf("Hangi islemi yapmak istiyorsun (+, -, *, /)?\n");
    scanf(" %c", &islem);

    printf("Lutfen sayi1'i giriniz: ");
    scanf("%f", &sayi1);

    printf("Lutfen sayi2'yi giriniz: ");
    scanf("%f", &sayi2);

    calculus(islem, sayi1, sayi2,&sonuc);

    printf("Ilk sayimiz %.2f, ikinci sayimiz %.2f, islemimiz %c ve sonucumuz: %.2f\n", sayi1, sayi2, islem, sonuc);

    return 0;
}
