#include <stdio.h>
#include <stdlib.h>


// Fibonacci fonksiyonunun tan�m�
int fibonacci(int n) {
    if (n == 1 || n == 2) {
        return 1;  // �lk iki Fibonacci say�s� 1'dir
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);  // �zyinelemeli durum
    }
}

int main() {
    int n;

    // Kullan�c�dan Fibonacci serisinin hangi eleman�n� istedi�ini al�yoruz
    printf("Hangi Fibonacci sayisini hesaplamak istiyorsunuz? ");
    scanf("%d", &n);

    // Fibonacci fonksiyonunu �a��rarak sonucu hesapl�yoruz
    int result = fibonacci(n);

    // Sonucu ekrana yazd�r�yoruz
    printf("Fibonacci(%d) = %d\n", n, result);

    return 0;
}
