#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    1-Galeri sahibi için araba adlý bir yapý tipi tanýmlayýnýz.Bu yapýdaki ilk eleman
    arabanýn satýlýp satýlmadýðýný tutmalýdýr.Eðer araba satýldýysa 1 deðerini,satýlmadýysa
    0 deðerini alacaktýr.Ýkinci eleman ise birleþim tipinde tanýmlanmalý ve eðer araba satýldýysa
    satýþ deðeri,satýlmadýysa arabanýn markasý tutulmalýdýr.
    2-araba_A deðiþkenini araba yapý tipinende tanýmlayýnýz.
    3-araba_A deðiþkenine satýlmamýþ olan "Anadol" marka arabanýn blgilerini atayýnýz.
    4-"Anadol" marka araba 20000 tl ye satýlýnca araba_A deðiþkeninde gereken
    güncellemeleri yapýnýz.


    struct araba{

    int satis;
    union{
    double fiyat;
    char marka[20];
    }bilgi;

    };


    struct araba araba_A;


    araba_A.satis=0;
    strcpy(araba_A.bilgi.marka,"Anadol");


    araba_A.satis=1;
    araba_A.bilgi.fiyat=20000;

    return 0;
}
