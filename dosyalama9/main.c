#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE* fptr;
    int numbers[7];
    int i;

    // Dosyayý okuma modunda aç
    fptr=fopen("C:\\Users\\fatih\\Desktop\\Data\\data.txt.txt","r");
    if(fptr == NULL) {
        printf("File could not be opened\n");// Hata mesajý
        return 1;  // Hata kodu ile çýkýþ
    }

    // Dosyadan veriyi oku
    fread(numbers, sizeof(int), 7, fptr);

    // Okunan veriyi ekrana yazdýr
    for(i = 0; i < 7; i++) {
        printf("%d\n", numbers[i]);
    }

    printf("Data was read from the file successfully\n");

    fclose(fptr);  // Dosyayý kapat

    return 0;
}
