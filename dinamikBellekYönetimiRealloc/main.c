#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    int n;
    int i;

    n = 5;
    printf("Baslangicta n deðeri: %d\n", n);

    // Bellek ayýrma
    ptr = (int*)calloc(n, sizeof(int));
    if (ptr == NULL) {
        printf("Bellek ayrýlmadý\n");
        return 1;  // 0 yerine 1 döndürmek, hata kodu döndürmek için daha uygun
    }

    // Ýlk elemanlarý atama ve yazdýrma
    printf("Ilk elemanlar:\n");
    for (i = 0; i < n; i++) {
        ptr[i] = i + 1;
    }
    for (i = 0; i < n; i++) {
        printf("%d ", ptr[i]);
    }
    printf("\n");

    // Belleði yeniden boyutlandýrma
    n = 10;
    ptr = (int*)realloc(ptr, n * sizeof(int));
    if (ptr == NULL) {
        printf("Bellek yeniden boyutlandýrýlamadý\n");
        return 1;  // 0 yerine 1 döndürmek, hata kodu döndürmek için daha uygun
    }

    // Yeni elemanlarý atama ve yazdýrma
    printf("Yeni elemanlar:\n");
    for (i = 5; i < n; i++) {
        ptr[i] = i + 1;
    }
    for (i = 0; i < n; i++) {
        printf("%d ", ptr[i]);
    }
    printf("\n");

    // Belleði serbest býrakma

    free(ptr);

    return 0;
}
