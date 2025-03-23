#include <stdio.h>
#include <stdlib.h>


// Fibonacci fonksiyonunun tanýmý
int fibonacci(int n) {
    if (n == 1 || n == 2) {
        return 1;  // Ýlk iki Fibonacci sayýsý 1'dir
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);  // Özyinelemeli durum
    }
}

int main() {
    int n;

    // Kullanýcýdan Fibonacci serisinin hangi elemanýný istediðini alýyoruz
    printf("Hangi Fibonacci sayisini hesaplamak istiyorsunuz? ");
    scanf("%d", &n);

    // Fibonacci fonksiyonunu çaðýrarak sonucu hesaplýyoruz
    int result = fibonacci(n);

    // Sonucu ekrana yazdýrýyoruz
    printf("Fibonacci(%d) = %d\n", n, result);

    return 0;
}
