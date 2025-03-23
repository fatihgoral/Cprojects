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
    printArray(); // S�ralamadan �nce de�erleri yazd�r

    // Fonksiyonu �a��r
    sortIt();
    printf("Siralamadan sonra:\n");
    printArray(); // S�ralamadan sonra de�erleri yazd�r
    printf("Ters siralama:\n");
    oppositeprintArray(); // Ters s�ralamay� yazd�r

    return 0;
}


void sortIt() {
    int j, reserve;
    for (i = 0; i < 6; i++) { // 6'ya kadar gidiyoruz ��nk� sonuncuyu kar��la�t�rmaya gerek yok
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
    for (i = 6; i >= 0; i--) { // `6`'dan ba�lay�p `0`'a kadar gider
        printf("%d ", numbers[i]);
    }
    printf("\n");
}
