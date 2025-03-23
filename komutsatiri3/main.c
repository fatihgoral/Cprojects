#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Bubble sort algoritmas�
void bubbleSort(char* arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (strcmp(arr[j], arr[j+1]) > 0) {
                // Yer de�i�tir
                char* temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main(int argc, char* argv[]) {
    printf("Girilen Arg�man Sayisi: %d\n", argc);

    // Arg�manlar� ekrana yazd�rma
    printf("Girilen Argumanlar:\n");
    for (int i = 0; i < argc; i++) {
        printf("%s\n", argv[i]);
    }

    // Arg�manlar� s�ralama (Bubble Sort)
    bubbleSort(argv, argc);

    // S�ralanm�� arg�manlar� ekrana yazd�rma
    printf("\nSiralanm�s Argumanlar:\n");
    for (int i = 0; i < argc; i++) {
        printf("%s\n", argv[i]);
    }

    return 0;
}
