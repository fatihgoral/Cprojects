#include <stdio.h>
#include <stdlib.h>
#define VERGI_kitap 4.0
#define VERGI_temelgida 5.6
#define VERGI_luks 19.6
#define KITAP 0
#define TEMELGIDA 1
#define LUKS 2



/*
  3 adet ürünümüz var:Kitap Temel Gýda ve Lüks Kategori

Devlet her 3 gruba farklý oranlarda vergi uyguluyor.
Kitap için %4.0,temel gýda için %5.6,lüks ürün gammý için %19.6

Her ürünün bir kodu var:Kitabýn kodu 0,temel gýdanýn kodu 1,lüks ürünün kodu 2

Kullanýcýdan istediðiniz ürünün kodunu ve fiyatýný isteyen
daha sonra son fiyatý ekrana bastýran bir C program yazýnýz

*/

int main()
{

    int kod;
    float fiyat;

    printf("Lutfen urunun fiyatini ve kodunu girinz\n");
    scanf("%f %d",&fiyat,&kod);

    printf("Urunumuzun satis fiyati:\n");

    switch(kod){
        case KITAP:  printf("Fiyatimiz %f",fiyat+fiyat*VERGI_kitap/100);
                    break;

        case TEMELGIDA:printf("Fiyatimiz %f",fiyat+fiyat*VERGI_temelgida/100);
                    break;

        case LUKS:printf("Fiyatimiz %f",fiyat+fiyat*VERGI_luks/100);
                    break;

        default:printf("Boyle bir urun yoktur.Girdiginiz kod yanlis");
    }


    /*if(kod==KITAP)
    {
        printf("Fiyatimiz %f",fiyat+fiyat*VERGI_kitap/100);
    }
    else if(kod==TEMELGIDA)
    {
        printf("Fiyatimiz %f",fiyat+fiyat*VERGI_temelgida/100);
    }
    else if(kod==LUKS)
    {
        printf("Fiyatimiz %f",fiyat+fiyat*VERGI_luks/100);
    }
    else{
        printf("Boyle bir urun yoktur.Girdiginiz kod yanlis");
    }
*/



    return 0;

}
