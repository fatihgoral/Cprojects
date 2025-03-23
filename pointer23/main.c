#include <stdio.h>
#include <stdlib.h>
// kullanicidan bir karakter dizisi girmesini isteyin
//girdiginiz karakter dizisnden istediginiz bir harfin kaldirilmasini isteyin
// istediginiz karakter kaldýrýldýktan sonra dizinin son halini ekrana bastirabilen c programi yaziniz
int main()
{
  char dizi[100];
  char eleme;
  char *ptr;

  printf("lutfen bir karakter dizisi giriniz ");
 fgets(dizi, sizeof(dizi), stdin);
  printf("lutfen elemek istediginiz harfi seciniz");
  scanf("%c",&eleme);
// while dongusu ile
  ptr=dizi;
  while(*ptr){
    if(*ptr==eleme){
        strcpy(ptr,ptr+1);
    }
    else{
        ptr++;
    }
  }

 /*
 // for dongusu ile
  for(ptr=dizi;*ptr;ptr++){
    if(*ptr==eleme){
       strcpy(ptr,ptr+1) ;
       ptr--; // İşaretçiyi geri al, çünkü karakterler kaydı
    }
  }
  */


    // `strcpy(dizi, dizi + 1);` ifadesi, `dizi` dizisinin baþýndaki ilk karakteri kaldýrýr ve geri kalan karakterleri dizinin baþýna kopyalar.
//*ptr == eleme ifadesi, iþaretçilerin iþaret ettiði deðeri (yani dizinin mevcut karakterini)
//kontrol eder ve bu karakterin kullanýcý tarafýndan seçilen karakterle eþleþip eþleþmediðini belir

  printf("eleme yapildiktan sonra karakter dizimizin son hali: %s",dizi);

    return 0;
}









