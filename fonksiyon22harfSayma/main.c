#include <stdio.h>
#include <stdlib.h>

void karakterSayac(char x[]);

int main() {
    char x[100];
    int i = 0;

    printf("Bir cumle girin ('.' ile bitirin): ");

    do {
        scanf(" %c", &x[i]);
        i++;
    } while (x[i-1] != '.');

    x[i-1] = '\0';  // '.' karakterini null karakter ile degistirme

    karakterSayac(x);

    return 0;
}

void karakterSayac(char x[]) {
    int i;
    int aCount = 0, eCount = 0;  // Degiskenleri baþlatma

    for (i = 0; x[i] != '\0'; i++) {
        if (x[i] == 'A' || x[i] == 'a') {
            aCount++;
        }
        if (x[i] == 'E' || x[i] == 'e') {
            eCount++;
        }
    }

    printf("A/a sayisi: %d\n", aCount);
    printf("E/e sayisi: %d\n", eCount);
}



