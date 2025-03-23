
  #include <stdio.h>
#include <stdlib.h>
//ayni kodun do while ile yazilisi
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


