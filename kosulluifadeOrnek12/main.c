#include <stdio.h>

int main() {
    char harf;


    printf("Bir harf girin (a-A, b-B): ");
    scanf(" %c", &harf);  // onceki girisleri yok saymak i�in onunde bosluk var bu sayede hata vermeyecek

    switch (harf) {
        case 'a':
        case 'A':
            printf("a-A harfini girdiniz.\n");
            break;
        case 'b':
        case 'B':
            printf("b-B harfini girdiniz.\n");
            break;
        default:
            printf("Ge�ersiz bir harf girdiniz.\n");
            break;
    }

    return 0;
}
