#include <stdio.h>
#include <stdlib.h>
#define MIL 1.609
// bir arabanin gittigi yolu mil cinsinden girdi olarak alan ve bunu km'ye ceviren bir c program�n� yaziniz
// 1 mil =1.609
// onemli not: c de ondalik sayilari belirtmek icin her zaman nokta kullan�lmalidir virg�l kullanilmaz
// ornegin ustte 1,609 yazarsak virg�l kullan�ld�g�na 1 ve 609 olarak degerlendirili
int main()
{
    float mil_yol,km_yol;
    printf("mil cinsinden gittiginiz yolu giriniz\n");
    scanf("%f",&mil_yol);
    km_yol=MIL*mil_yol;
    printf("girilen mil degerinin km cinsinden degeri:%.2f",km_yol);


    return 0;
}
