#include <stdio.h>

// Fonksiyon bildirimi
float hesapla(int sayi1, int sayi2, char op) {
    float sonuc;

    switch (op) {
        case '+':
            sonuc = sayi1 + sayi2;
            break;
        case '-':
            sonuc = sayi1 - sayi2;
            break;
        case '*':
            sonuc = sayi1 * sayi2;
            break;
        case '/':
            if (sayi2 != 0) {
                sonuc = (float)sayi1 / sayi2; // Tam say� b�l�m� yerine float d�n���m�
            } else {
                printf("Bu i�lem tan�ms�z (0'a b�lme).\n");
                return 0; // Tan�ms�z durumu i�in 0 d�nd�r
            }
            break;
        default:
            printf("Ge�ersiz i�lem.\n");
            return 0; // Ge�ersiz i�lem durumu i�in 0 d�nd�r
    }

    return sonuc;
}

int main() {
    int sayi1, sayi2;
    char op;
    float sonuc;

    printf("L�tfen yapaca��n�z i�lemi se�in (+, -, *, /): ");
    scanf(" %c", &op); // Bo�luk b�rakmak, �ncesindeki bo�lu�u yoksayar

    printf("L�tfen say�lar� giriniz: ");
    scanf("%d %d", &sayi1, &sayi2);

    sonuc = hesapla(sayi1, sayi2, op);

    // Sonucu yazd�r
    if (op == '+' || op == '-' || op == '*' || (op == '/' && sayi2 != 0)) {
        printf("Se�ti�iniz i�lem: %c ve i�lem sonucu: %.2f\n", op, sonuc);
    }

    return 0;
}
