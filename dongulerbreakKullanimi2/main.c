#include <stdio.h>

int main() {
    int sayi;
    while (1) { // Sonsuz d�ng�
        printf("Bir pozitif sayi giriniz (negatif girince duracak): ");
        scanf("%d", &sayi);
        if (sayi < 0) {
            break; // Negatif bir say� girildi�inde d�ng�den ��k�l�r
        }
    }
    printf("Negatif sayi girdiniz, program sonlandi.\n");
    return 0;
}

