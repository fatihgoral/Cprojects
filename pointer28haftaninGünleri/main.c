
#include <stdio.h>
#include <stdlib.h>

/* 7 adet karakter dizisi yani haftan�n g�nlerini tutan pointer yaz�n�z.
   Kullan�c� 1 ile 7 aras�nda bir de�er girmez ise tekrar de�er girmesini isteyin. */
int main()
{
    char* gunler[7] = {"pazartesi", "sali", "carsamba", "persembe", "cuma", "cumartesi", "pazar"};
    int n;

    do {
        printf("L�tfen 1 ile 7 aras�nda bir say� giriniz: ");
        scanf("%d", &n);
    } while (n < 1 || n > 7);

    printf("%d numaral� haftan�n g�n� %s\n", n, gunler[n-1]);

    return 0;
}
