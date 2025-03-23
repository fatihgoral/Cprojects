
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float number;
    FILE* fptr;
    char data[100];

    // Dosyayý aç ve fptr'ye ata
    fptr = fopen("C:\\Users\\fatih\\Desktop\\Data\\databelgesi.txt", "r");
    if (fptr == NULL) {
        printf("File open unsuccessful\n");
    } else {
        // Dosyadan veri oku
        fscanf(fptr, "%s %f", data, &number);
        printf("Data: %s\n", data);
        printf("Number: %.2f\n", number);

        fclose(fptr);  // Dosyayý kapat
    }

    return 0;
}

