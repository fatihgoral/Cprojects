#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main()
{
   FILE* fptr;
   char myLetter;
   fptr=fopen("C:\\Users\\fatih\\Desktop\\Data\\datakutu.txt","r");

   // Dosyay� okuma modunda a�

       printf("File open unsuccessful\n");
       //return 1;  // Hata kodu ile ��k��


   // Dosyadan karakterleri oku ve ekrana yaz
   do {
       myLetter = getc(fptr);  // Karakteri oku
       if (myLetter != EOF) {  // EOF olmad���nda yazd�r
           printf("%c", myLetter);
       }
   } while (myLetter != EOF);  // EOF'ye kadar d�ng� devam etsin

   printf("\nReading is over\n");

   fclose(fptr);  // Dosyay� kapat
   return 0;
}
