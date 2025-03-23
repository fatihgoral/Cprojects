#include <stdio.h>
#include <stdlib.h>

int main()
{
    // girilen sayinin asal olup olmadýgýný bulan program....

//Deðiþkenler tanýmlandýklarý anda bir baþlangýç deðeri almazlarsa, bellekte rastgele bir deðerle baþlatýlýrlar.
//Bu durum programýn istikrarýný bozabilir veya hatalý sonuçlara yol açabilir.
// Bu nedenle, bir deðiþken tanýmlanýrken ilk deðer olarak genellikle mantýklý bir baþlangýç deðeri verilir.
// bu metindeki türkce karakterleri ingilizce yapip ver
//


    int sayi=0;
    int i=2;
   printf("lutfen bir sayi giriniz : ") ;
   scanf("%d",&sayi);

   if(sayi<0){
printf("pozitif degil !! pozitif bir sayi giriniz");

   return 0;
   }
   while(i<=sayi/2){
    if(sayi%i==0){
        printf("%d sayisi %d sayisina bolunur bu yuzden sayiniz asal degildir",sayi,i);
       return 0;
    }
i++;
   }

    printf("%d sayisi asaldir",sayi);

  return 0;
}
