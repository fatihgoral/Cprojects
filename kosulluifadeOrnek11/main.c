#include <stdio.h>

int main() {
    int gun;

    printf("L�tfen bir g�n numaras� giriniz (1-7): ");
    scanf("%d", &gun);

    switch (gun) {
        case 1:
            printf("Pazartesi\n");
        case 2:
            printf("Sali\n");
        case 3:
            printf("�arsamba\n");
        case 4:
            printf("Persembe\n");
        case 5:
            printf("Cuma\n");
        case 6:
            printf("Cumartesi\n");
        case 7:
            printf("Pazar\n");
        default:
            printf("Gecersiz gun numarasi!\n");
    }

    return 0;
}

