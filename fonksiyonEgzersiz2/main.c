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
                sonuc = (float)sayi1 / sayi2; // Tam sayý bölümü yerine float dönüþümü
            } else {
                printf("Bu iþlem tanýmsýz (0'a bölme).\n");
                return 0; // Tanýmsýz durumu için 0 döndür
            }
            break;
        default:
            printf("Geçersiz iþlem.\n");
            return 0; // Geçersiz iþlem durumu için 0 döndür
    }

    return sonuc;
}

int main() {
    int sayi1, sayi2;
    char op;
    float sonuc;

    printf("Lütfen yapacaðýnýz iþlemi seçin (+, -, *, /): ");
    scanf(" %c", &op); // Boþluk býrakmak, öncesindeki boþluðu yoksayar

    printf("Lütfen sayýlarý giriniz: ");
    scanf("%d %d", &sayi1, &sayi2);

    sonuc = hesapla(sayi1, sayi2, op);

    // Sonucu yazdýr
    if (op == '+' || op == '-' || op == '*' || (op == '/' && sayi2 != 0)) {
        printf("Seçtiðiniz iþlem: %c ve iþlem sonucu: %.2f\n", op, sonuc);
    }

    return 0;
}
