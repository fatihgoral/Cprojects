
  #include <stdio.h>
#include <stdlib.h>
//ayni kodun do while ile yazilisi
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


