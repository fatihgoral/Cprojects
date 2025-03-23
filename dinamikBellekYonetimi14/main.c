#include <stdio.h>
#include <stdlib.h>
//bilgisayar tarafýndan n adet sayi uretilmesi, uretilen tamsayýlarýn
//kucukten buyuge dogru sýralanmasý ve dizi olusturmak sýralamak ve buyuk fonksiyonlarýný kulanýllmaktadýr
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
