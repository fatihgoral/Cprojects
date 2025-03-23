#include <stdio.h>
#include <stdlib.h>

struct karmasikSayi {
    float a;
    float b;
};

int main() {
    struct karmasikSayi sayi1, sayi2, sonuc;
    char oper;

    printf("lutfen yapmak istediginiz islemi seciniz (+ veya - olmali) : ");
    scanf(" %c", &oper); // Önde boþluk karakteri ile \n temizlenir

    printf("lutfen birinci karmasik sayinin once gercek sonra sanal kismini giriniz: ");
    scanf("%f %f", &sayi1.a, &sayi1.b);

    printf("lutfen ikinci karmasik sayinin once gercek sonra sanal kisminþ giriniz: ");
    scanf("%f %f", &sayi2.a, &sayi2.b);

    if (oper == '+') {
        sonuc.a = sayi1.a + sayi2.a;
        sonuc.b = sayi1.b + sayi2.b;
    } else if (oper == '-') {
        sonuc.a = sayi1.a - sayi2.a;
        sonuc.b = sayi1.b - sayi2.b;
    } else {
        printf("lutfen adamakilli ve gecerli secim yapiniz. Adami yormayiniz.\n");
        printf("Algoritmayi olusturana kadar catladim zaten. Lutfen sayin kullanici istenen operatorleri sakince giriniz.\n");
        return 1; // Geçersiz operatör girildiðinde programý sonlandýrýr
    }

    printf("sonuc:\n");
    printf("%.2f", sonuc.a);

//    Eger sonuc.b pozitifse (veya sifirsa), karmasik sayinin gosterimi a + bi seklinde olur. Buradaki + isaretinin eklenmesi gerekir.
//     Bu nedenle, if (sonuc.b >= 0) kontrolunu kullaniyoruz. Bu kosul saglanirsa, + isaretini manuel olarak ekliyoruz.
//Eger sonuc.b negatifse, b degeri zaten - isaretini icerir. Bu durumda, ekstra bir + isareti eklemeye gerek yoktur.
//Bu yuzden, else blogunda sonuc.b'yi dogrudan yazdiriyoruz.
    if (sonuc.b >= 0) {
        printf(" + %.2f i\n", sonuc.b);
    } else {
        printf(" %.2f i\n", sonuc.b);
    }

    return 0;
}
