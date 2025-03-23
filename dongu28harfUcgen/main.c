#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j;
    char input,character='A';
    printf("buyuk harf giriniz lutfen : ");
    scanf("%c",&input);
       // Dýs dongu: 'A' dan kullanici girdisine kadar olan harfleri yazdirir
// input ve A karakterlerinini ASCII koduyla islem yapilir
    for(i=1;i<=input-'A'+1;i++){
      for(j=1;j<=i;j++){  // /  dongu: Ayný harfi i kere yazdirir.
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

// alternatif yöntem farklý algoritma
int main()
{
    int i, j, numRows;
    char input;
    printf("Enter an uppercase letter: ");
    scanf("%c", &input);

    // Satýr sayýsýný belirle
    numRows = input - 'A' + 1;

    // Satýrlarý yazdýr
    for (i = 0; i < numRows; i++) {
        // Ayný harfi i+1 kere yazdýr
        for (j = 0; j <= i; j++) {
            printf("%c", 'A' + i);
        }
        printf("\n"); // Yeni satýra geç
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

    // Dýþ döngü: 'A' dan baþlayarak input'a kadar olan harfleri yazdýrýr
    for (char character = 'A'; character <= input; character++) {
        // Ýç döngü: Her satýrda ayný harfi belirli sayýda yazdýrýr
        for (i = 1; i <= (character - 'A' + 1); i++) {
            printf("%c", character);
        }
        printf("\n"); // Her satýrdan sonra yeni satýra geçer
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

    // Kullanýcýdan büyük bir harf girmesini isteyen mesaj
    printf("enter an uppercase letter: ");
    // Kullanýcý girdisini alma
    scanf("%c", &input);

    // Dýþ döngü: 'A' dan kullanýcý girdisine kadar olan harfleri yazdýrýr
    while (character <= input) {
        // Ýç döngü: Ayný harfi belirli sayýda yazdýrýr
        i = character - 'A' + 1;
        for (j = 0; j < i; j++) {
            printf("%c", character);
        }
        // Bir sonraki harfe geç
        character++;
        // Yeni satýra geç
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

    // Kullanýcýdan büyük bir harf girmesini isteyen mesaj
    printf("enter an uppercase letter: ");
    // Kullanýcý girdisini alma
    scanf("%c", &input);

    // Dýþ döngü: 'A' dan kullanýcý girdisine kadar olan harfleri yazdýrýr
    do {
        // Ýç döngü: Ayný harfi belirli sayýda yazdýrýr
        i = character - 'A' + 1;
        for (j = 0; j < i; j++) {
            printf("%c", character);
        }
        // Bir sonraki harfe geç
        character++;
        // Yeni satýra geç
        printf("\n");
    } while (character <= input);

    return 0;
}
*/




