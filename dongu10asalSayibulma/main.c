#include <stdio.h>
#include <stdlib.h>

int main()
{
    // girilen sayinin asal olup olmad�g�n� bulan program....

//De�i�kenler tan�mland�klar� anda bir ba�lang�� de�eri almazlarsa, bellekte rastgele bir de�erle ba�lat�l�rlar.
//Bu durum program�n istikrar�n� bozabilir veya hatal� sonu�lara yol a�abilir.
// Bu nedenle, bir de�i�ken tan�mlan�rken ilk de�er olarak genellikle mant�kl� bir ba�lang�� de�eri verilir.
// bu metindeki t�rkce karakterleri ingilizce yapip ver
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
