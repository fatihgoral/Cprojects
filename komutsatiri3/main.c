#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Bubble sort algoritması
void bubbleSort(char* arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (strcmp(arr[j], arr[j+1]) > 0) {
                // Yer değiştir
                char* temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main(int argc, char* argv[]) {
    printf("Girilen Argüman Sayisi: %d\n", argc);

    // Argümanları ekrana yazdırma
    printf("Girilen Argumanlar:\n");
    for (int i = 0; i < argc; i++) {
        printf("%s\n", argv[i]);
    }

    // Argümanları sıralama (Bubble Sort)
    bubbleSort(argv, argc);

    // Sıralanmış argümanları ekrana yazdırma
    printf("\nSiralanmıs Argumanlar:\n");
    for (int i = 0; i < argc; i++) {
        printf("%s\n", argv[i]);
    }

    return 0;
}
