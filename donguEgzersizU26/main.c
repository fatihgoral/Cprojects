#include <stdio.h>
#include <stdlib.h>
#define VERGI_kitap 4.0
#define VERGI_temelgida 5.6
#define VERGI_luks 19.6
#define KITAP 0
#define TEMELGIDA 1
#define LUKS 2



/*
  3 adet �r�n�m�z var:Kitap Temel G�da ve L�ks Kategori

Devlet her 3 gruba farkl� oranlarda vergi uyguluyor.
Kitap i�in %4.0,temel g�da i�in %5.6,l�ks �r�n gamm� i�in %19.6

Her �r�n�n bir kodu var:Kitab�n kodu 0,temel g�dan�n kodu 1,l�ks �r�n�n kodu 2

Kullan�c�dan istedi�iniz �r�n�n kodunu ve fiyat�n� isteyen
daha sonra son fiyat� ekrana bast�ran bir C program yaz�n�z

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
