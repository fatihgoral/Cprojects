#include <stdio.h>
#include <stdlib.h>
//bilgisayar taraf�ndan n adet sayi uretilmesi, uretilen tamsay�lar�n
//kucukten buyuge dogru s�ralanmas� ve dizi olusturmak s�ralamak ve buyuk fonksiyonlar�n� kulan�llmaktad�r
//dinamik bellek yonetimiyle beraber c dilindeki kodu yaziniz...
int main()
{
    char *metin;
    metin=(char *)calloc(100,sizeof(char));
    printf("lutfen cumle giriniz: ");
    gets(metin);
    printf("girdiginiz metin : %s",metin);
    return 0;
}
