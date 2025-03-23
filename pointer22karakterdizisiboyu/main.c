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
//   Döngü içinde bir iþlem yapýlmak istenseydi, bu iþlem burada tanýmlanýrdý. Ancak bu kod örneðinde,
//   amaç sadece dizinin sonuna kadar ilerlemek olduðu için döngü içinde baþka bir þey yapýlmasýna gerek kalmamýþ.
   printf("Dizimiz %s %d kadar karakterden olusmaktadir.",can,pointer-can);
//Döngü tamamlandýðýnda, pointer null karakterden bir sonraki bellek adresini iþaret eder.
//Yani, pointer null karakterden bir pozisyon ileri gitmiþtir.
//Döngü, *pointer null karakter ('\0') olmadýðý sürece çalýþýr.
//Null karakter dizinin sonunu belirttiði için, döngü dizinin
//sonuna kadar devam eder ve null karaktere ulaþýldýðýnda döngü sona erer.
}
