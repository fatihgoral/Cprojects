#include <stdio.h>
#include <stdlib.h>

int main()
{
   char can[100];
   char *pointer;

   printf("Lutfen bir karakter dizisi girin\n");
   gets(can);

   for(pointer=can;*pointer;pointer++)
   {

   }
//   D�ng� i�inde bir i�lem yap�lmak istenseydi, bu i�lem burada tan�mlan�rd�. Ancak bu kod �rne�inde,
//   ama� sadece dizinin sonuna kadar ilerlemek oldu�u i�in d�ng� i�inde ba�ka bir �ey yap�lmas�na gerek kalmam��.
   printf("Dizimiz %s %d kadar karakterden olusmaktadir.",can,pointer-can);
//D�ng� tamamland���nda, pointer null karakterden bir sonraki bellek adresini i�aret eder.
//Yani, pointer null karakterden bir pozisyon ileri gitmi�tir.
//D�ng�, *pointer null karakter ('\0') olmad��� s�rece �al���r.
//Null karakter dizinin sonunu belirtti�i i�in, d�ng� dizinin
//sonuna kadar devam eder ve null karaktere ula��ld���nda d�ng� sona erer.
}
