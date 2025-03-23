#include <stdio.h>
#include <stdlib.h>
//C dilinde enum (enumeration), genellikle tamsayi (integer) degerler icerir. Enum, bir degiskenin belirli bir
//kumedeki adlandirilmis sabitlerden birini alabilecegini belirtir ve bu sabitler genellikle tamsayilarla iliskilidir
 typedef enum
 {
   ocak=1,
   subat,
   mart,
   nisan,
   mayis,
   haziran,
   temmuz,
   agustos,
   eylul,
   ekim,
   kasim,
   aralik

 }aylar;

void ayi_goster(aylar canan)
{
    switch(canan)
    {
    case ocak:
        printf("Ocak");
        break;
        case subat:
        printf("subat");
        break;
        case mart:
        printf("mart");
        break;
        case nisan:
        printf("nisan");
        break;
        case mayis:
        printf("may�s");
        break;
        case haziran:
        printf("haziran");
        break;
        case temmuz:
        printf("temmuz");
        break;
        case agustos:
        printf("agustos");
        break;
        case eylul:
        printf("eylul");
        break;
        case ekim:
        printf("ekim");
        break;
        case kasim:
        printf("kasim");
        break;
        case aralik:
        printf("aralik");
        break;
        default:
        printf("Boyle bir ay yok");
        break;

    }
}

int main()
{
    aylar can=temmuz;
    ayi_goster(can);
    //Tek bir isim kullanmak teknik olarak m�mk�nd�r, ancak isimler arasindaki ayirim kodun daha anlasilir olmasini saglar.
    // Bu, �zellikle daha karma��k kodlarda ve projelerde �nemli bir ayr�ntidir. Ayrica, kodun bakimi ve hata ayiklamasi s�ras�nda isimlerin farkl� olmasi,
    //degiskenlerin hangi baglamda kullanildigini netlestiri
    return 0;
}

