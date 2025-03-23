#include <stdio.h>
#include <stdlib.h>
/*
pointer kullanarak iki dizi olustur ve bumlari ekrana bas ardindan
bu */

int main()
{
    int dizi1[100], dizi2[100];
    int *ptr1, *ptr2;
    int n, m;
    int i;

    printf("Ilk dizimizin eleman sayisi (max 50) : \n");
    scanf("%d", &n);
    for (ptr1 = dizi1; ptr1 < dizi1 + n; ptr1++)
    {
        printf("Eleman %d : ", ptr1 - dizi1);
        scanf("%d", ptr1);
    }

    printf("Ikinci dizimizin eleman sayisi : \n");
    scanf("%d", &m);
    for (ptr2 = dizi2; ptr2 < dizi2 + m; ptr2++)
    {
        printf("Eleman %d : ", ptr2 - dizi2);
        scanf("%d", ptr2);
    }

    printf("Ilk dizimiz : \n");
    for (i = 0; i < n; i++)
    {
        printf("%4d", *(dizi1 + i));
    }

    printf("\nIkinci dizimiz : \n");
    for (i = 0; i < m; i++)
    {
        printf("%4d", *(dizi2 + i));
    }

    for (ptr1 = dizi1 + n, ptr2 = dizi2; ptr2 < dizi2 + m; ptr1++, ptr2++)
    {
        *ptr1 = *ptr2;
    }

    printf("\nBirlestirmeden sonra : \n");
    for (i = 0; i < n + m; i++)
    {
        if (i == n)
    {
        printf(" "); // İlk dizinin sonundan sonra boşluk ekle
    }
      printf("%4d", *(dizi1 + i));
    }

    return 0;
}
