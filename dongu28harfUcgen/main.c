#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j;
    char input,character='A';
    printf("buyuk harf giriniz lutfen : ");
    scanf("%c",&input);
       // D�s dongu: 'A' dan kullanici girdisine kadar olan harfleri yazdirir
// input ve A karakterlerinini ASCII koduyla islem yapilir
    for(i=1;i<=input-'A'+1;i++){
      for(j=1;j<=i;j++){  // /  dongu: Ayn� harfi i kere yazdirir.
        printf("%c",character);
      }
   character++;
   printf("\n");

    }


    return 0;
}

/*
#include <stdio.h>
#include <stdlib.h>

// alternatif y�ntem farkl� algoritma
int main()
{
    int i, j, numRows;
    char input;
    printf("Enter an uppercase letter: ");
    scanf("%c", &input);

    // Sat�r say�s�n� belirle
    numRows = input - 'A' + 1;

    // Sat�rlar� yazd�r
    for (i = 0; i < numRows; i++) {
        // Ayn� harfi i+1 kere yazd�r
        for (j = 0; j <= i; j++) {
            printf("%c", 'A' + i);
        }
        printf("\n"); // Yeni sat�ra ge�
    }

    return 0;
}

*/

/*

// alternatif yontem farkli bir tane daha algoritma

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j;
    char input;
    printf("Enter an uppercase letter: ");
    scanf("%c", &input);

    // D�� d�ng�: 'A' dan ba�layarak input'a kadar olan harfleri yazd�r�r
    for (char character = 'A'; character <= input; character++) {
        // �� d�ng�: Her sat�rda ayn� harfi belirli say�da yazd�r�r
        for (i = 1; i <= (character - 'A' + 1); i++) {
            printf("%c", character);
        }
        printf("\n"); // Her sat�rdan sonra yeni sat�ra ge�er
    }

    return 0;
}

/*
// ayni kodun while ile yazilisi
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j;
    char input, character = 'A';

    // Kullan�c�dan b�y�k bir harf girmesini isteyen mesaj
    printf("enter an uppercase letter: ");
    // Kullan�c� girdisini alma
    scanf("%c", &input);

    // D�� d�ng�: 'A' dan kullan�c� girdisine kadar olan harfleri yazd�r�r
    while (character <= input) {
        // �� d�ng�: Ayn� harfi belirli say�da yazd�r�r
        i = character - 'A' + 1;
        for (j = 0; j < i; j++) {
            printf("%c", character);
        }
        // Bir sonraki harfe ge�
        character++;
        // Yeni sat�ra ge�
        printf("\n");
    }

    return 0;
}
*/


/*
#include <stdio.h>
#include <stdlib.h>
ayni kodun do while ile yazilisi
int main()
{
    int i, j;
    char input, character = 'A';

    // Kullan�c�dan b�y�k bir harf girmesini isteyen mesaj
    printf("enter an uppercase letter: ");
    // Kullan�c� girdisini alma
    scanf("%c", &input);

    // D�� d�ng�: 'A' dan kullan�c� girdisine kadar olan harfleri yazd�r�r
    do {
        // �� d�ng�: Ayn� harfi belirli say�da yazd�r�r
        i = character - 'A' + 1;
        for (j = 0; j < i; j++) {
            printf("%c", character);
        }
        // Bir sonraki harfe ge�
        character++;
        // Yeni sat�ra ge�
        printf("\n");
    } while (character <= input);

    return 0;
}
*/




