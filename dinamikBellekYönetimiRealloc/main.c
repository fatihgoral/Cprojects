#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    int n;
    int i;

    n = 5;
    printf("Baslangicta n de�eri: %d\n", n);

    // Bellek ay�rma
    ptr = (int*)calloc(n, sizeof(int));
    if (ptr == NULL) {
        printf("Bellek ayr�lmad�\n");
        return 1;  // 0 yerine 1 d�nd�rmek, hata kodu d�nd�rmek i�in daha uygun
    }

    // �lk elemanlar� atama ve yazd�rma
    printf("Ilk elemanlar:\n");
    for (i = 0; i < n; i++) {
        ptr[i] = i + 1;
    }
    for (i = 0; i < n; i++) {
        printf("%d ", ptr[i]);
    }
    printf("\n");

    // Belle�i yeniden boyutland�rma
    n = 10;
    ptr = (int*)realloc(ptr, n * sizeof(int));
    if (ptr == NULL) {
        printf("Bellek yeniden boyutland�r�lamad�\n");
        return 1;  // 0 yerine 1 d�nd�rmek, hata kodu d�nd�rmek i�in daha uygun
    }

    // Yeni elemanlar� atama ve yazd�rma
    printf("Yeni elemanlar:\n");
    for (i = 5; i < n; i++) {
        ptr[i] = i + 1;
    }
    for (i = 0; i < n; i++) {
        printf("%d ", ptr[i]);
    }
    printf("\n");

    // Belle�i serbest b�rakma

    free(ptr);

    return 0;
}
