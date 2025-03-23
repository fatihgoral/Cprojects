#include <stdio.h>

int main() {
    int sayi;
    while (1) { // Sonsuz döngü
        printf("Bir pozitif sayi giriniz (negatif girince duracak): ");
        scanf("%d", &sayi);
        if (sayi < 0) {
            break; // Negatif bir sayý girildiðinde döngüden çýkýlýr
        }
    }
    printf("Negatif sayi girdiniz, program sonlandi.\n");
    return 0;
}

