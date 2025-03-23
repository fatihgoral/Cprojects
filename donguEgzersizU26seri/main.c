#include <stdio.h>
#include <math.h>

int main() {
    int n, i;
    float x, seri = 0;

    printf("Pozitif bir sayi giriniz: ");
    scanf("%d", &n);

    printf("Reel sayi: \n");
    scanf("%f", &x);

    for(i = 1; i <= 2 * n - 1; i += 2) {
        seri = seri + i / pow(x, i + 1);
    }
    printf("Seri: %f", seri);
    return 0;
}
