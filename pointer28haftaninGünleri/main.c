
#include <stdio.h>
#include <stdlib.h>

/* 7 adet karakter dizisi yani haftanýn günlerini tutan pointer yazýnýz.
   Kullanýcý 1 ile 7 arasýnda bir deðer girmez ise tekrar deðer girmesini isteyin. */
int main()
{
    char* gunler[7] = {"pazartesi", "sali", "carsamba", "persembe", "cuma", "cumartesi", "pazar"};
    int n;

    do {
        printf("Lütfen 1 ile 7 arasýnda bir sayý giriniz: ");
        scanf("%d", &n);
    } while (n < 1 || n > 7);

    printf("%d numaralý haftanýn günü %s\n", n, gunler[n-1]);

    return 0;
}
