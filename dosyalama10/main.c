#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main()
{
   FILE* fptr;
   char myLetter;
   fptr=fopen("C:\\Users\\fatih\\Desktop\\Data\\datakutu.txt","r");

   // Dosyayý okuma modunda aç

       printf("File open unsuccessful\n");
       //return 1;  // Hata kodu ile çýkýþ


   // Dosyadan karakterleri oku ve ekrana yaz
   do {
       myLetter = getc(fptr);  // Karakteri oku
       if (myLetter != EOF) {  // EOF olmadýðýnda yazdýr
           printf("%c", myLetter);
       }
   } while (myLetter != EOF);  // EOF'ye kadar döngü devam etsin

   printf("\nReading is over\n");

   fclose(fptr);  // Dosyayý kapat
   return 0;
}
