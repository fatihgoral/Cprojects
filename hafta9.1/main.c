#include <stdio.h>
#include <stdlib.h>

int hesap(int sayi) {
    int sum = 0;
    for (int i = 1; i <= sayi; i++) {
        sum += i;
    }
    return sum;
}

int main() {
    int sayi;
    printf("Sayiyi giriniz: ");
    scanf("%d", &sayi);

    int sumSonuc = hesap(sayi);
    printf("Sayi = %d  icin toplam = %d\n", sayi, sumSonuc);

    return 0;
}



