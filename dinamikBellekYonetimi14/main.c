#include <stdio.h>
#include <stdlib.h>
//bilgisayar tarafından n adet sayi uretilmesi, uretilen tamsayıların
//kucukten buyuge dogru sıralanması ve dizi olusturmak sıralamak ve buyuk fonksiyonlarını kulanıllmaktadır
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
