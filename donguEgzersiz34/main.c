#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi;
    int toplam = 0;
    int i;
    int j;
    printf("lutfen bir sayi giriniz: ");
    scanf("%d", &sayi);

    for (i = 1; i <= sayi; i++) {
        toplam = 0;
        for (j = 1; j < i; j++) {
            if (i % j == 0) {
                toplam += j;
            }
        }

        if (toplam == i) {
            printf("%d\n", i);
        }
    }
    return 0;
}




