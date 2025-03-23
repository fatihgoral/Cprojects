#include <stdio.h>
#include <stdlib.h>
// fputs()-->dosyaya bir karakter dizisi kaydeder
//fprintf--> dosyaya bicimlendirilmis veri kaydeder

//%s ve %d gibi yer tutuculari kullanirsa, veriyi bicimlendirrek yazmis olursun.
//Bicimlendirilmis veri, verinin belirli bir duzende ve formatta yazilmasi anlamina gelir. %s, %d gibi format belirleyicileri kullanmazsan,
//sadece duz metin olarak dosyaya yazarsin. O durumda veri, belli bir formatta degil, oldugu gibi dosyaya kaydedilmis olur.

int main()
{
 FILE *dosya;
 char[]="ayse";
 dosya=fopen(dosya,"bu dosya %s dosyasidir",isim);
 fclose(dosya);

    return 0;
}
