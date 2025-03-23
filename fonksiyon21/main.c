#include <stdio.h>
#include <stdlib.h>

int numbers[7];
int i;

// Fonksiyon bildirimi
void sortIt();
void printArray();
void oppositeprintArray();

int main() {
    printf("Lutfen siralanacak 7 elemanin degerini giriniz:\n");
    for (i = 0; i < 7; i++) {
        scanf("%d", &numbers[i]);
    }

    printf("Siralamadan once:\n");
    printArray(); // Sýralamadan önce deðerleri yazdýr

    // Fonksiyonu çaðýr
    sortIt();
    printf("Siralamadan sonra:\n");
    printArray(); // Sýralamadan sonra deðerleri yazdýr
    printf("Ters siralama:\n");
    oppositeprintArray(); // Ters sýralamayý yazdýr

    return 0;
}


void sortIt() {
    int j, reserve;
    for (i = 0; i < 6; i++) { // 6'ya kadar gidiyoruz çünkü sonuncuyu karþýlaþtýrmaya gerek yok
        for (j = i + 1; j < 7; j++) {
            if (numbers[j] < numbers[i]) {
                reserve = numbers[i];
                numbers[i] = numbers[j];
                numbers[j] = reserve;
            }
        }
    }
}

void printArray() {
    for (i = 0; i < 7; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");
}

void oppositeprintArray() {
    for (i = 6; i >= 0; i--) { // `6`'dan baþlayýp `0`'a kadar gider
        printf("%d ", numbers[i]);
    }
    printf("\n");
}
