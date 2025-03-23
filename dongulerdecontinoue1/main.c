#include <stdio.h>
//continue deyimi, bir dongude belirli bir kosul saglandiginda yalnizca o iterasyondaki kalan kod satirlarini atlar. Yani, o iterasyon icinde continue deyiminden sonra
//gelen kodlari calistirmaz ve dongunun bir sonraki turuna gecler. Ancak dongunun tamamini sonlandirmaz; yalnizca o anki turu atlar.

int main() {
    int numbers[] = {1, -2, 3, -4, 5, -6};
    int sum = 0;
    int length = sizeof(numbers) / sizeof(numbers[0]);

    for (int i = 0; i < length; i++) {
        if (numbers[i] < 0) {
            continue; // Negatif sayýlarý atla
        }
        sum += numbers[i];
    }
    printf("Pozitif sayýlarýn toplamý: %d\n", sum);
    return 0;
}

// Çýktý: Pozitif sayýlarýn toplamý: 9
