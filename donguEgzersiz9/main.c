#include <stdio.h>
#include <stdlib.h>
// kullanicidan buyuk harf tipinde bir karakter girmesini isteyiniz
// eger girdiginiz karakter buyuk harf ise o harfi kucuk harfe cevirin
//eger girdiginiz karakter kucuk harf ise ekrana hata mesaji yazdirin

int main()
{
    char harf;
 printf("lutfen buyuk harf tipinde bir harf girin");
 scanf(" %c",&harf);
 if(harf>='A' && harf<='Z'){
    printf("kucuk harfiniz: %c",tolower(harf));
 }
else{
    printf("yanlis bir karakter girdiniz");
}
    return 0;
}
