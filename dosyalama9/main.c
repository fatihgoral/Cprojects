#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE* fptr;
    int numbers[7];
    int i;

    // Dosyay� okuma modunda a�
    fptr=fopen("C:\\Users\\fatih\\Desktop\\Data\\data.txt.txt","r");
    if(fptr == NULL) {
        printf("File could not be opened\n");// Hata mesaj�
        return 1;  // Hata kodu ile ��k��
    }

    // Dosyadan veriyi oku
    fread(numbers, sizeof(int), 7, fptr);

    // Okunan veriyi ekrana yazd�r
    for(i = 0; i < 7; i++) {
        printf("%d\n", numbers[i]);
    }

    printf("Data was read from the file successfully\n");

    fclose(fptr);  // Dosyay� kapat

    return 0;
}
