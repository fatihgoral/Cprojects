#include <stdio.h>
#include <stdlib.h>

int main()
{
     char metin[250];
    printf("lutfen metni giriniz: ");
    fgets(metin, 250, stdin);


//'0' ile 0 farkli seylerdir. '0' karakteri ASCII tablosunda 48 degerine, 0 ise gercek bir tam sayi (integer) olan
//sifira karsilik gelir. Eger karakterleri ' ' (tek tirnak) olmadan kullanirsaniz, bu karsilastirmalar aritmetik
//degerlerle yapilmaya calisilir ve karakterlerle
//bir aralik olusturarak calismaz.
//
//

    int i;
    int harfSayisi = 0;
    int boslukSayisi = 0;
    int sayiSayisi = 0;

    for (i = 0; metin[i] != '\0'; i++) { // D�ng� ko�ulunda hata d�zeltildi
        if ((metin[i] >= 'a' && metin[i] <= 'z') || (metin[i] >= 'A' && metin[i] <= 'Z')) { // Karakter aral��� kontrol� d�zeltildi
            harfSayisi++; // Hatal� de�i�ken ad� d�zeltildi
        }
        if (metin[i] >= '0' && metin[i] <= '9') { // Say� kontrol� d�zeltildi
            sayiSayisi++; // Hatal� de�i�ken ad� d�zeltildi
        }
        if (metin[i] == ' ') { // Bo�luk kontrol� d�zeltildi
            boslukSayisi++;
        }
    }

    printf("Harf sayisi: %d\n", harfSayisi);
    printf("Sayi sayisi: %d\n", sayiSayisi);
    printf("Bosluk sayisi: %d\n", boslukSayisi);

    return 0;
    return 0;
}
