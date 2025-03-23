#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Bubble sort algoritmasý
void bubbleSort(char* arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (strcmp(arr[j], arr[j+1]) > 0) {
                // Yer deðiþtir
                char* temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main(int argc, char* argv[]) {
    printf("Girilen Argüman Sayisi: %d\n", argc);

    // Argümanlarý ekrana yazdýrma
    printf("Girilen Argumanlar:\n");
    for (int i = 0; i < argc; i++) {
        printf("%s\n", argv[i]);
    }

    // Argümanlarý sýralama (Bubble Sort)
    bubbleSort(argv, argc);

    // Sýralanmýþ argümanlarý ekrana yazdýrma
    printf("\nSiralanmýs Argumanlar:\n");
    for (int i = 0; i < argc; i++) {
        printf("%s\n", argv[i]);
    }

    return 0;
}
