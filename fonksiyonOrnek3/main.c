#include <stdio.h>
#include <stdlib.h>
// bir fonksiyonda 4 temel i�lemi switch case kullanarak yapsin
// cagirma islemi degisken degeriyle olsun

float calculus(char islem, float n1, float n2) {
    float islemSonucu;  // 'sonuc' yerine 'islemSonucu' kullan�ld�
    switch(islem) {
        case '+':
            islemSonucu = n1 + n2;
            break;
        case '-':
            islemSonucu = n1 - n2;
            break;
        case '*':
            islemSonucu = n1 * n2;
            break;
        case '/':
            if (n2 != 0) {
                islemSonucu = n1 / n2;
            } else {
                printf("Hata: 0'a bolme hatasi!\n");
                return 0;
            }
            break;
        default:
            printf("Gecersiz islem!\n");
            return 0;
    }
    return islemSonucu;  // Art�k 'islemSonucu' d�nd�r�l�yor
}

int main() {
    float sayi1, sayi2, sonuc;
    char islem;

    printf("Hangi islemi yapmak istiyorsun (+, -, *, /)?\n");
    scanf(" %c", &islem);

    printf("Lutfen sayi1'i giriniz: ");
    scanf("%f", &sayi1);

    printf("Lutfen sayi2'yi giriniz: ");
    scanf("%f", &sayi2);

    sonuc = calculus(islem, sayi1, sayi2);  // 'sonuc' de�iskeni, 'calculus' fonksiyonundan d�nen de�eri al�yor

    printf("Ilk sayimiz %.2f, ikinci sayimiz %.2f, islemimiz %c ve sonucumuz: %.2f\n", sayi1, sayi2, islem, sonuc);

    return 0;
}
